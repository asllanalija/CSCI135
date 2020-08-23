//
#include <iostream>
#include <string>

using std::string;

void sort2(double* p, double* q)
{
    if (*p > *q)
    {
        double temp = *q;
        *q = *p;
        *p = temp;
    }
}

