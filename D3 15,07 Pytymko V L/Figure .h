
#ifndef FIGURE_H
#define FIGURE_H

class Figure {
protected:
	double side;
public:
	Figure(double s);
	virtual double area() const ;
	virtual double perimeter() const ;

};

class Square : public Figure {
public:
	Square(double s);
	double area()const;
	double perimeter()const;

};


class Triangle :public Figure {
public:
	Triangle(double s);
	double area()const;
	double perimeter()const;
};

class Rectangle :public Figure {
protected:
	double length;
public :
	Rectangle(double s1, double s2);
	double area()const;
	double perimeter()const;

};

class Circle :public Figure {
public:
	Circle(double r);
	double area()const;
	double perimeter()const;
};


class CircleInSquare :public Square, public Circle {
public:
	CircleInSquare(double c);
	double area()const;
	double perimeter()const;

	};
























#endif