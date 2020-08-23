/*
  Name: Asllan Alija
  Course: CSCI 135
  Instructor: Genady Maryash
  Assignment: HW 6.8
  Checks if two arrays in the same order are equal.
 */

#include <iostream>


bool equals(int a[], int a_size, int b[], int b_size)
{
    if (a_size != b_size)
        return false;

    for (int i = 0; i < a_size; i++)
        if (a[i] != b[i])
            return false;
    return true;
}

int main()
{
}
