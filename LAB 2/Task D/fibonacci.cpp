/*

Author: Asllan Alija

Course: CSCI-135

Instructor: Genady Maryash

Assignment: Lab 2-D

Prints first 60 terms of the fibonacci sequence.

*/

#include <iostream>
using namespace std;

int main()
{
  int fib[60];
  fib[0] = 0;
  fib[1] = 1;
  cout << 0 << endl << 1 << endl;

  // Fibonacci sequence, each element is the last two elements added together.
  for (int i = 2; i < 60; i++)
  {
    fib[i] = fib[i - 1] + fib[i - 2];
    cout << fib[i] << endl;
  }
  /*
  What happens as the fibonacci number becomes increasingly big
  is something called integer overflow. The value of an integer is
  stored in a 32 bit binary number, where the first number (from the left) represents
  the sign of the number. It is 1 if its negative, 0 if its positive. If a number
  becomes bigger than the datatype it is stored in, it will use the most
  significant bit, which is usually reserved for the sign of the number, to
  attempt to create this number that is out of range. The negative numbers are a result
  of this.
  */
}
