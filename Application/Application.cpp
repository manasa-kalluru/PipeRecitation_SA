// Application.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "Application.h"
#include <iostream>
using namespace std;

CoolClass::CoolClass(void)
{
}

int CoolClass::Calc(int a, int b)
{
    if (a == b)
    {
        cout<<"This indicates a and b are equal\na="<<a<<"\nb="<<b;
        return 2 * a;
    }
    else
    {
        return a + b;
    }
    
}
