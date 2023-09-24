#pragma once
#include <string>

class Door {
protected:
	int quantity;
public:
	Door(int qt);
	void show();
};

class Wheel {
protected:
	int inch;
public:
	Wheel(int _inch);
	void show();
};
class Engine {
protected:
	std::string fuel;
	double displacement;
public:
	Engine(const std::string& _fuel, double _displacement);
	void show();
};
class Auto :public Door, public Wheel, public Engine {
private:
	std::string model;
public:
	Auto(int qt, int _inch, const  std::string& _fuel, double _displacement,  const std::string _model);
	void show();
};