#include <iostream>

int main()
{
  int first = 0;
  int second = 0;
  std::cout << "Enter the first number: ";
  std::cin >> first;
  std::cout << "Enter the second number: ";
  std::cin >> second;
  std::cout << std::endl << "The smaller of the two is ";
  if (first > second)
    std::cout << second;
  else
    std::cout << first;
}
