#include <iostream>
using namespace std;
#include "Club.h"

int main()
{
     Club Chelsea(33, 4);
     Chelsea.print();
     // Goals : 33
     // Wins : 4

     cout << endl;

     Club United;
     United.print();
     // Goals : 0
     // Wins : 0
     United.setValues(100, 200);
     United.print();
     // Goals : 100
     // Wins : 200

     return 0;
}