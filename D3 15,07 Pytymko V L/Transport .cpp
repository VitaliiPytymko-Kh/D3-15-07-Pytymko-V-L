#include "Transports.h"

Transport::Transport(int _speed) :speed(_speed) {}

double Transport::CalcuTime(double distance) {
	return distance / speed;
}

double Transport::CalcuCost(double distance) {

	return 0;
}

Car::Car(int _speed, double _fuelConsum, double _fuelPrice) :Transport(_speed), fuelConsum(_fuelConsum), fuelPrice(_fuelPrice) {}

double Car::CalcuCost(double distance){
	double fuelNeed = (distance / 100.0) * fuelPrice;
	return fuelNeed * fuelPrice;
}

Cart::Cart(int _speed, double _cartRentCost) :Transport(_speed), cartRentCost(_cartRentCost) {};
double Cart::CalcuCost(double distance) {
	return cartRentCost;
}

Bicycle::Bicycle(int _speed, double _bikeRentCost) :Transport(_speed), bikeRentCost(_bikeRentCost) {};
double Bicycle :: CalcuCost(double distance) {

	return bikeRentCost;
}



