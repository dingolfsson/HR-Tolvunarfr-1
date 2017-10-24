#include "Num.h"

Num::Num(int n) 
    : num(n)
{}

int Num::getNum()
{
    return num;
}

int Num::doubleNumber()
{
    return 2*num;
}