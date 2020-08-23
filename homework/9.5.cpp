/*
  Name: Asllan Alija
  Course: CSCI 135
  Instructor: Genady Maryash
  Assignment: HW E9.5

  
 */
#include <iostream>

class Rectangle
{
  private:
    double length, width;
  public:
    Rectangle(double l, double w);
    double get_perimeter();
    double get_area();
    void resize(double factor);
};

Rectangle::Rectangle(double l, double w)
{
    length = l;
    width = w;
}
double Rectangle::get_perimeter()
{
    return 2*width + 2*length;
}
double Rectangle::get_area()
{
    return length*width;
}
void Rectangle::resize(double factor)
{
    length = length * factor;
    width = width * factor;
}

int main()
{
}
