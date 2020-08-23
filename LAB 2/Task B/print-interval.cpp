/*

Author: Asllan Alija

Course: CSCI-135

Instructor: Genady Maryash

Assignment: Lab 2-B

Prints all numbers in the range L <= num < U

*/

#include <iostream>
using namespace std;

int main()
{
  int L;
  int U;
  cout << "Please enter L: ";
  cin >> L;
  cout << "Please enter U: ";
  cin >> U;

  // Prints all values between L and U using for loop
  for (int i = L; i < U; i++)
  {
    cout << i << " ";
  }
}
