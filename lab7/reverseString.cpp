#include <iostream>
#include <cstring>

using namespace std;

void reverse(char* str);

int main() {
    char str[5];

    cout << "string : ";
    cin >> str;

    reverse(str);

    cout << str << endl;
    return 0;
}

void reverse(char* str) {
    char* first =& *str;
    char* rear =& *str;
    cout << rear << endl;
    while ( first ) {
        *rear = *first;
        first++;
    }
}
