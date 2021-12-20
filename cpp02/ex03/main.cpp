#include <iostream>
#include "point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point );

int main()
{
    /* Point a(5,5);
    Point b(1,12);
    Point c(12,12);
    Point point(7,9); */ // este punto esta dentro

    Point a(5,5);
    Point b(8,12);
    Point c(3,25);
    Point point(4,11); //Este punto esta fuera

    std::cout << "Vertice a( " << a.getX() << " , " << a.getY() << " )" << std::endl;
    std::cout << "Vertice b( " << b.getX() << " , " << b.getY() << " )" << std::endl;
    std::cout << "Vertice c( " << c.getX() << " , " << c.getY() << " )" << std::endl;
    std::cout << "Punto point( " << point.getX() << " , " << point.getY() << " )" << std::endl;
    
    if (bsp(a, b, c, point))
        std::cout << "Point is inside the triangle" << std::endl;
    else
        std::cout << "Point is not inside the triangle" << std::endl;
    return (0); 
}