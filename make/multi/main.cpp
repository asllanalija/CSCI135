#include <iostream>
#include "addfuncs.h"
int main()
{
  int x;

  x = sum(3, 5);
  std::cout << x << std::endl;

  x = sum3(10, 15, 5);

  std::cout << x << std::endl;
  return 0;
}
