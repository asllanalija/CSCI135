/*
Author: Asllan Alija
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab1D

Prints number of days in a given month.

*/
#include <iostream>
bool leap(int year)
{
  if (year % 4 != 0)
    return false;
  else if (year % 100 != 0)
    return true;
  else if (year % 400 != 0)
   return false;
  else
   return true;
}
int main() 
{
  // initialize variables
  int year;
  int month;
  // take in month and year from user
  std::cout << "Enter year: ";
  std::cin >> year;
  std::cout << "Enter month: ";
  std::cin >> month;
  std::cout << std::endl;

  
  if (month == 2)
  {
    if (leap(year))
      std::cout << 29;
    else
      std::cout << 28;
  }
  else if (month < 8)
  {
    if (month % 2 == 1)
      std::cout << 31;
    else
      std::cout << 30;
  }
  else
  {
    if (month % 2 == 0)
      std::cout << 31;
    else
      std::cout << 30;
  }
  std::cout << " days" << std::endl;
  return 0;
}

