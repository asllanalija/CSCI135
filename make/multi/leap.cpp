/*
Author: Asllan Alija
Course: CSCI-136
Instructor: Mike Zamansky
Assignment: Lab1C

Prints whether or not the given year is a leap year or not.
*/
#include <iostream>
using namespace std;
int main() 
{
  //initialize year variable
  int year;
  string com = "Common year";
  string leap = "Leap year";

  // take in year from user
  std::cout << "Enter year: ";
  std::cin >> year;
  std::cout << std::endl;

  // Checks if year is a leap year
  if (year % 4 != 0)
    std::cout << com;
  else if (year % 100 != 0)
    std::cout << leap;
  else if (year % 400 != 0)
    std::cout << com;
  else
    std::cout << leap;
  std::cout << std::endl;
  return 0;
}
