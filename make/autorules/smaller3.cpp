#include <iostream>

int main()
{
  int first = 0;
  int second = 0;
  int third = 0;
  std::cout << "Enter the first number: ";
  std::cin >> first;
  std::cout << "Enter the second number: ";
  std::cin >> second;
  std::cout << "Enter the third number: ";
  std::cin >> third;

  std::cout << std::endl << "The smaller of the three is ";
  if (first < second)
    if (first < third)
      std::cout << first;
    else
      std::cout << third;
  else if (second < third)
    std::cout << second;
  else
    std::cout << third;
  std::cout << std::endl;
}
