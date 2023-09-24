#include "Figure .h"
#include <iostream>

Figure::Figure(double s) :side( s) {}

double Figure::area() const
{
	return 0.0;
}

double Figure::perimeter() const
{
	return 0.0;
}

Square::Square(double s):Figure(s){}

double Square::area() const
{
	return side*side;
}

double Square::perimeter() const
{
	return 4*side;
}

Triangle::Triangle(double s):Figure(s){}

double Triangle::area() const
{
	return (sqrt(3) / 4) * side * side;
}

double Triangle::perimeter() const
{
	return 3*side;
}

Rectangle::Rectangle(double s1, double s2) :Figure(s1) , length(s2) {}

double Rectangle::area() const
{
	return side* length;
}

double Rectangle::perimeter() const
{
	return 2*(side * length);
}

Circle::Circle(double r):Figure(r){}

double Circle::area() const
{
	return 3.14 * side * side;
}

double Circle::perimeter() const
{
	return 2*3.14*side;
}

CircleInSquare::CircleInSquare(double c):Square(c),Circle(c/2.0){}

double CircleInSquare::area() const
{
	return Circle::area();
}

double CircleInSquare::perimeter() const
{
	return Square::perimeter();
}
