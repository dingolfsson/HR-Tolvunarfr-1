#include <iostream>
#include <math.h>

using namespace std;

void welcome();
int get_number();
void cd_floop(int x);
void cd_wloop(int y);
void r_floop(int x, int y);
void r_wloop(int x, int y);

int main () {

    welcome();

    int foo[10];

    for (int i = 0; i < 10; i++) {
        cin >> foo[i];
        cout << foo[i] << endl;
    }

    int a;
    int b;
    cout << "telja fra : ";
    a = get_number();
    cout << "telja upp ad : ";
    b = get_number();

    r_floop(a, b);
    r_wloop(a, b);

    //cd_floop(a);
    //cd_wloop(a);

    return 0;
}

void welcome() {
    cout << "HOGAN POWER" << endl;
}

int get_number() {
    int tmp;
    cin >> tmp;
    return tmp;
}

void cd_floop(int x) {
    cout << "FOR" << endl;
    for (int i = 0; i <= x; i++) {
        cout << x - i << " ";
    }
    cout << endl;
}

void cd_wloop(int y) {
    cout << "WHILE" << endl;
    while (y > -1) {
        cout << y << " ";
        y--;
    }
}

void r_floop(int x, int y) {
    for (int i = x; i <= y; i++) {
        if (i % 2 == 1) {
            cout << i << " ";
        }
    }
}

void r_wloop(int x, int y) {
    while (x <= y) {
        if (x % 2 == 1) {
            cout << x << " ";
        }
        x++;
    }
}
