// D3 15,07 Pytymko V L.cpp : This file contains the 'main' function. Program execution begins and ends there.
//1) Создайте класс Student (поля - имя типа string и возраст) и его дочерний класс StepStudent. У класса  StepStudent добавляется поле technologies (количество языков программирования, которыми студент владеет).
//В main() создайте объект типа StepStudent и выведите его поля на экран.

#include <iostream>
#include <string>
using namespace std;


class Student
{
public:
	Student(const string& _name, int _age) : name(_name), age(_age) {}
	void print() {
		cout << "Name : " << name << " , Age : " << age << endl;
	}

protected:
	string name;
	int age;
};

class StepStudent : public Student
{
public:
	StepStudent(const string& _name, int _age, int _tech) : Student(_name, _age), tech(_tech) {}
	void print() {
		Student::print();
		cout << "Tech : " << tech  << endl;
	}
	
private:
	int tech;
};


int main()
{
	StepStudent stud1("Stepan", 24, 4);
	stud1.print();
    
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
