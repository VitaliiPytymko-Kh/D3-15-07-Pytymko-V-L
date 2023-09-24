#include "Class'sStudent.h"
#include <iostream>

Student::Student(const std::string& _name, int _age) : name(_name), age(_age) {}

void Student::print() {
    std::cout << "Name: " << name << ", Age: " << age << std::endl;
}

StepStudent::StepStudent(const std::string& _name, int _age, int _techs)
    : Student(_name, _age), techs(_techs) {}

void StepStudent::print() {
    Student::print();
    std::cout << "Tech: " << techs << std::endl;
}
