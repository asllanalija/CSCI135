#pragma once
class Triangle
{
protected:
    double base;
    double height;
public:
    Triangle();

    Triangle(double b, double h);
    double get_base();

    double get_area();
};
