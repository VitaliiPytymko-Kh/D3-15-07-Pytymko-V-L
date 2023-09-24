
#ifndef CLASSSTUDENT_H
#define CLASSSTUDENT_H

#include <string>

class Student {
protected:
    std::string name;
    int age;

public:
    Student(const std::string& _name, int _age);

    void print();
};

class StepStudent : public Student {
private:
    int techs;

public:
    StepStudent(const std::string& _name, int _age, int _techs);

    void print();
};

#endif