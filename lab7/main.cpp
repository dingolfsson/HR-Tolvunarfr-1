#include <iostream>
#include <array>
#include <string>

using namespace std;

void showArray(int array[]);

int getInteger(string s); 

void insertToArray(int array[]);

void removeV(int array[], int v);

//void func(int* p, int n);

int main() {

    int n = getInteger("Size of array: ");
    int a[n-1];
    //int* p;
    //p = a;
    insertToArray(a);
    showArray(a);
    int v = getInteger("Integer to remove: ");
    removeV(a, v);
    showArray(a);
    return 0;
}

int getInteger(string s) {
    cout << s;
    int temp;
    cin >> temp;
    return temp;
}

void showArray(int array[]) {
    while (*array) {
        cout << "Number : " << *array << endl;
        ++array;
    }
}

void insertToArray(int array[]) {
    while (*array) {
        cout << "Input a number: ";
        cin >> *array;
        ++array;
    }
}

void removeV(int array[], int v) {
    while (*array) {
        if (*array == v) {
            *array = *(++array);
        }
        *(--array) = 0;
    }
}
