//
/*
Author: Asllan Alija
Course: CSCI-135
Instructor: Genady Maryash
Assignment: HW 3.1

Prints whether an inputted number is positive, negative, or zero.
*/

#include <iostream>

int main()
{
  int num;
  std::cout << "Enter a number: ";
  std::cin >> num;
  if (num > 0)
    std::cout << "Positive";
  else if (num < 0)
    std::cout << "Negative";
  else
    std::cout << "Zero";
}
