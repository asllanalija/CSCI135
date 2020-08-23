/*
Author: Asllan Alija
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Project 1A

Keeps a running total of inputted integers.
*/

#include <iostream>
using namespace std;

int main()
{
  int sum = 0;
  int num;
  // While the user keeps inputting numbers.
  while (cin >> num)
    sum += num;
  cout << sum << endl;
}
