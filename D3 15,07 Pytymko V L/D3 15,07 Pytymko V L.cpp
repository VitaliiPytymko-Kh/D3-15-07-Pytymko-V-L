// D3 15,07 Pytymko V L.cpp : This file contains the 'main' function. Program execution begins and ends there.
//1) Создайте класс Student (поля - имя типа string и возраст) и его дочерний класс StepStudent. У класса  StepStudent добавляется поле technologies (количество языков программирования, которыми студент владеет).
//В main() создайте объект типа StepStudent и выведите его поля на экран.
//2) Создайте класс Transport(транспортное средство) и его дочерние классы Автомобиль, Повозка, Велосипед.
//Создайте методы для расчета времени и стоимости поездки.
//3) Создайте класс Passport (паспорт), который будет содержать паспортную информацию о гражданине Украины.
//С помощью механизма наследования реализуйте класс ForeignPassport(загранпаспорт), производный от Passport.
//Напомним, что загранпаспорт содержит помимо паспортных данных также данные о визах, номер загранпаспорта.
//4) Используя наследование, создайте классы для геометрических фигур (см. рисунок на слайде 20 презентации по наследованию, выслана в Тимс).
//Базовый класс будет содержать одно поле - сторона фигуры.Обязательно создайте методы для расчета площади и периметра фигуры в классе Фигура
//и переопределите эти методы в дочерних классах.
//5) Используя множественное наследование, разработать класс “Окружность, вписанная в квадрат”.
//6) Используя множественное наследование, разработать класс “Автомобиль”. 
// Автомобиль будет потомком для классов “Колеса”, “Двигатель”, “Двери”.

#include "Class'sStudent.h"
#include "Transports.h"
#include"Passport.h"
#include"Figure .h"
#include"AUTO.h"
#include<iostream>
using namespace std;

int main()
{
	StepStudent stud1("Stepan", 24, 4);
	stud1.print();

	cout << endl;

	double distance = 100.0;
	Car car(60, 8.0, 54.50);
	Cart cart(10, 100);
	Bicycle bike(15,30.50);

	cout << "Car:" << endl;
	cout << "Time:" << car.CalcuTime(distance) << endl;
	cout << "Cost:" << car.CalcuCost(distance) << endl;

	cout << "Cart:" << endl;
	cout << "Time:" << cart.CalcuTime(distance) << endl;
	cout << "Cost:" << cart.CalcuCost(distance) << endl;

	cout << "Bicycle:" << endl;
	cout << "Time:" << bike.CalcuTime(distance) << endl;
	cout << "Cost:" << bike.CalcuCost(distance) << endl;

	cout << endl;

	Passport Ua("Sam", "Sed", "555", "05.05.2020");
	Ua.display();

	cout << endl;

	ForeignPassport FpUa("Edy", "Edsa", "32321", "07.07.2027","555606");
	FpUa.addVisa("USA");
	FpUa.addVisa("UK");
	FpUa.addVisa("AU");
	FpUa.display();


	Square square(5.0);
	Triangle triangle(4.0);
	Rectangle rectangle(6.0, 8.0);
	Circle circle(3.0);

	cout << endl;

	cout << "square.area: " << square.area() << endl;
	cout << "square.perimeter: " << square.perimeter() << endl;

	cout << "triangle.area: " << triangle.area() << endl;
	cout << "Triangle.perimeter: " << triangle.perimeter() << endl;

	cout << "rectangle.area: " << rectangle.area() << endl;
	cout << "rectangle.perimeter: " << rectangle.perimeter() << endl;

	cout << "circle.area: " << circle.area() << endl;
	cout << "circle.perimeter: " << circle.perimeter() << endl;


	cout << endl;

	CircleInSquare cis(4.0);
	std::cout << "CircleInSquare area: " << cis.area() << std::endl;
	std::cout << "CircleInSquare square perimeter: " << cis.perimeter() << std::endl;

	cout << endl;

	Auto myCar(4, 18, "Gasoline", 2.0, "Sedan");
	myCar.show();
	cout << endl;
	Auto workCar(5, 17, "disel", 2.5, "SUV");
	workCar.show();



	return 0;




}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
