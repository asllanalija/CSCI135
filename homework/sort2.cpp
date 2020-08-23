//
/*
Author: Asllan Alija
Course: CSCI-135
Instructor: Genady Maryash
Assignment: HW E5.14

Swaps two variables, a and b if a > b.
*/

#include <iostream>

void sort2(int& a, int& b)
{
    int temp;
    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
}

int main()
{
    int u = 2;
    int v = 3;
    int w = 4;
    int x = 1;
    sort2(u, v);
    sort2(w, x);
}
