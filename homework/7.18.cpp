//
#include <iostream>
#include <cmath>

struct Point
{
    double x,y;
};
struct Triangle
{
    Point a,b,c;
};

double distance(Point a, Point b)
{
    return sqrt((b.y - a.y)*(b.y - a.y) + (b.x - a.x)*(b.x - a.x));
}

double perimeter(Triangle tri)
{
    return distance(tri.a, tri.b) + distance(tri.b, tri.c) + distance(tri.a, tri.c);
}

/*int main()
{
    Point a,b,c;
    double x,y;
    std::cin >> x;
    std::cin >> y;
    a.x = x;
    a.y = y;
    std::cin >> x;
    std::cin >> y;
    b.x = x;
    b.y = y;
    std::cin >> x;
    std::cin >> y;
    c.x = x;
    c.y = y;
    Triangle tri;
    tri.a = a;
    tri.b = b;
    std::cout << perimeter(tri) << std::endl;
    }*/
