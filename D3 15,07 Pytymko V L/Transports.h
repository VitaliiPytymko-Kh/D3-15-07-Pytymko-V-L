#ifndef TRANSPORTS_H
#define TRANSPORTS_H
class Transport {
protected :
	int speed;
public:
	Transport(int _speed);

	double CalcuTime(double distance);

	virtual double CalcuCost(double distance);

};

class Car: public Transport {
public:
	Car(int _speed, double _fuelConsum, double _fuelPrice);
	double CalcuCost(double distance) override;
	
private:
	double fuelConsum;
	double fuelPrice;
};

 
class Cart : public Transport {
private:
	double cartRentCost;

public :
	Cart(int _speed, double _cartRentCost);
	double CalcuCost(double distance) override;
	
};

class Bicycle :public Transport {
private:
	double bikeRentCost;
public: 
	Bicycle(int _speed, double _bikeRentCost);
	double CalcuCost(double distance) override;
};


#endif