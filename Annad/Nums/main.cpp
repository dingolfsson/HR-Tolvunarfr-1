#include <iostream>
#include "Num.h"

using namespace std;

int main()
{
    Num n(35);
    Num hundrad(100);
    cout << n.getNum() << endl; // 35
    cout << hundrad.getNum() << endl; // 100
    cout << hundrad.doubleNumber() << endl; // 200
    return 0;
} 