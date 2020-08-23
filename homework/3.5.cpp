//
/*
  Name: Asllan Alija
  Class: CSCI-135
  Professor: Genady Maryash
  Assignment: HW E3.5

  This takes in three ints and determines whether they are in increasing or decreasing order, or neither.
*/
#include <iostream>
int main()
{
    int num1, num2, num3;
    std::cin >> num1;
    std::cin >> num2;
    std::cin >> num3;

    if (num1 > num2)
    {
        if (num2 > num3)
            std::cout << "decreasing";
        else
            std::cout << "neither";
    }
    else if (num1 < num2)
    {
        if (num2 < num3)
            std::cout << "increasing";
        else
            std::cout << "neither";
    }
    else
        std::cout << "neither";
}
