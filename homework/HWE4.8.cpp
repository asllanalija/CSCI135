/*
Author: Asllan Alija
Course: CSCI-135
Instructor: Genady Maryash
Assignment: HW E4.8

Given an input string from the user, prints out each letter of the string
on a new line.
*/

#include <iostream>
#include <string>

int main()
{
  std::string str;
  std::cin >> str;
  for (int i = 0; i < str.size(); i++)
  {
    std::cout << str.substr(i, 1) << std::endl;
  }
}
