/*
Author: Asllan Alija
Course: CSCI-135
Instructor: Genady Marash
Assignment: Project 1B

Evaluates expressions of addition and subtraction.
*/

#include <iostream>
using namespace std;

int main()
{
  int num;
  char symbol;
  int sum = 0;
  bool cont = true;
  cin >> num;
  sum += num;

  // The integer and sign always alternates, so I used mod to alternate.
  for (int i = 1; cont; i++)
  {
    if (i % 2 == 0)
    {
      cin >> num;
      if (symbol == '+')
	     sum += num;
      else
        sum -= num;
    } //if the next input is not a symbol after a number, then the input has ended.
    else if (!(cin >> symbol))
	cont = false;
  }
  cout << sum;
}
