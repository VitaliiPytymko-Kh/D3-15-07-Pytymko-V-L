#include "Passport.H"
#include <iostream>



Passport::Passport(const std::string& firstName, const std::string& lastName, const std::string& idNumber, const std::string& birthDate)
	:first_name(firstName),last_name(lastName),id_number (idNumber),birth_date(birthDate){}

void Passport::display() 
{ 
	std::cout << " First Name : " << first_name << std::endl;
	std::cout << " Last Name : " << last_name << std::endl;
	std::cout << " ID Number : " << id_number << std::endl;
	std::cout << " Birth Date : " << birth_date << std::endl;
}

ForeignPassport::ForeignPassport(const std::string& firstName, const std::string& lastName, const std::string& idNumber, const std::string& birthDate, const std::string& fgNumber)
	: Passport(firstName, lastName, idNumber, birthDate), fg_number(fgNumber) {}

void ForeignPassport::addVisa(const std::string& visa) {
	visas.push_back(visa);
}

void ForeignPassport::display() {
	Passport::display();
	std::cout << " ForeignPassport Number : " << fg_number << std::endl;
	std::cout << " Visas: ";
	for(std::string visa : visas) {
		std::cout << visa << ", ";
	}
	std::cout << std::endl;

}


