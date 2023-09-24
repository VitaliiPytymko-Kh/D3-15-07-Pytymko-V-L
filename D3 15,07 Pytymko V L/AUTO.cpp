#include "AUTO.h"
#include <iostream>
Door::Door(int qt):quantity(qt){}

void Door::show()
{
	std::cout << "Door in auto: " << quantity << std::endl;
}

Wheel::Wheel(int _inch):inch(_inch){}

void Wheel::show()
{
	std::cout << "Wheel on auto: " << inch <<" inch" << std::endl;
}

Engine::Engine(const std::string&_fuel, double _displacement):fuel(_fuel),displacement(_displacement){}

void Engine::show()
{
	std::cout << "Engine type fuel: " << fuel << std::endl;
	std::cout << "Engine displacement : " << displacement << std::endl;
}

Auto::Auto(int qt, int _inch, const std::string& _fuel, double _displacement, const std::string _model)
	:Door(qt),Wheel(_inch),Engine(_fuel, _displacement),model(_model){}

void Auto::show()
{
	std::cout << "Auto Model: " << model << std::endl;
	std::cout << "Engine type fuel: " << fuel << std::endl;
	std::cout << "Engine displacement : " << displacement << std::endl;
	std::cout << "Wheel on auto: " << inch << " inch" << std::endl;
	std::cout << "Door in auto: " << quantity << std::endl;
}

