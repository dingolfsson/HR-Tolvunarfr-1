#include <iostream>
#include <iomanip>
#include "Club.h"
using namespace std;

Club :: Club(const int param1, const int param2)
    : goals(param1), wins(param2)
{}

void Club :: setValues(const int param1, const int param2)
{
    goals = param1;
    wins = param2;
}

void Club :: print() const
{
     cout << "Goals : " << goals << endl;
     cout << "Wins : " << wins << endl;
}