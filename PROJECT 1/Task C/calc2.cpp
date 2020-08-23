/*
Author: Asllan Alija
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Project 1 Task C

Extension of previous calculator program; can now calculate multiple lines of expressions.
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
  for (int i = 1; cont; i++)
  {
    // if the next input is a number, check the previous symbol. If it was a semicolon, reset the summation
    // and add the int you just read.
    if (i % 2 == 0)
    {
        cin >> num;
        if (symbol == '+')
          sum += num;
        else if (symbol == '-')
          sum -= num;
        else if (symbol == ';')
        {
          cout << sum << endl;
          sum = 0;
          sum += num;
        }
    }// if it reaches end of input, end loop.
    else if (!(cin >> symbol))
      cont = false;
  }
}
