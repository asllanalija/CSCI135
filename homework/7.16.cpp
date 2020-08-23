#include <iostream>
#include <cmath>
using namespace std;

struct Point
{
    double x, y;
};

double distance(Point a, Point b)
{
    return sqrt((b.y - a.y)*(b.y - a.y) + (b.x - a.x)*(b.x - a.x));
}
