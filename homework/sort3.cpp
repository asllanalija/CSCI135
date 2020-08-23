//
/*
Author: Asllan Alija
Course: CSCI-135
Instructor: Genady Maryash
Assignment: HW E5.15

orders three variables in increasing order.
*/

#include <iostream>

void sort2(int& a, int& b)
{
    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
}

void sort3(int& a, int& b, int& c)
{
    //5 4 3
    sort2(b, c); // 5 3 4
    sort2(a, b); // 3 5 4
    sort2(b, c); // 3 4 5
}

int main()
{
    int v = 3;
    int w = 4;
    int x = 1;
    sort3(v, w, x);
}
