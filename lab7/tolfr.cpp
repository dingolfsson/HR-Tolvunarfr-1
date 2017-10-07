#include <iostream>
#include <cmath>

using namespace std;

int getSize();

void fill_array(double* p);
void print_array(double* p);

double calc_mean(double* p, int size);

double calc_stdev(double* p, int size, double mean);

int lower_than_mean(double*, int size, double mean);

int main() {
    cout.precision(3);
    int n = getSize();

    double a[n];
    double* p = a;
    fill_array(p);
    print_array(p);
    double mean = calc_mean(p, n);
    double stdev = calc_stdev(p, n, mean);
    int lower = lower_than_mean(p, n, mean);
    cout << "\nNumber are in, the results are!\n" << endl;
    cout << "Mean: " << fixed << mean << endl;
    cout << "Standard Deviation: " << fixed << stdev << endl;
    cout << "Numbers lower than mean: " << lower << endl;

    return 0;
}

int getSize() {
    int n;
    cin >> n;
    return n;
}

void fill_array(double* p) {
    while ( *p ) {
        cin >> *p;
        ++p;
    }
}
void print_array(double* p) {
    while ( *p ) {
        cout << "stak i array = " << *p << endl;
        ++p;
    }
}

double calc_mean(double* p, int size) {
    double mean = 0.0;
    int i = size;
    while ( i > 0 ) {
        mean += *p;
        ++p;
        i--;
    }
    return (mean / size);
}

double calc_stdev(double* p, int size, double mean) {
    double stdev = 0.0;
    int i = size;
    while ( i > 0 ) {
        stdev += pow((*p - mean), 2);
        ++p;
        i--;
    }
    return ((sqrt((stdev)  * 1/size)));
}

int lower_than_mean(double* p, int size, double mean) {
    int lower = 0;
    while ( size > 0) {
        if (*p < mean) {
            lower++;
        }
        ++p;
        size--;
    }
    return lower;
}
