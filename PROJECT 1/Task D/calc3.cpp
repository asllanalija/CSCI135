/*
Author: Asllan Alija
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Project 1 Task D

Can calculate squares of numbers, and can take in multiple expressions.
*/

#include <iostream>
using namespace std;

int main()
{
  int num;
  char symbol;
  int sum = 0;
  bool cont = true;
  bool pos = true;
  // While there is still input, continue.
  while (cont)
  {
    if (cin >> num)
    {
      // Take in a number, then take in a symbol right after. If its an exponent, check last sign, and add/subtract the square.
      // If its not an exponent, it must be a + or -, so check for that, and assign the sign to a boolean variable.
      // true if positive, false if negative.
      cin >> symbol;
      if (symbol == '^')
      {
        if (pos)
          sum += num*num;
        else
          sum -= num*num;
        cin >> symbol;
      }
      else
      {
        if (pos)
          sum += num;
        else
          sum-= num;
      }
      if (symbol == '+')
        pos = true;
      else if (symbol == '-')
        pos = false;
      else if (symbol == ';')
      {
        cout << sum << endl;
        sum = 0;
        symbol = '+';
        pos = true;
      }
    }
    else
    {
      cont = false;
    }
  }
}
