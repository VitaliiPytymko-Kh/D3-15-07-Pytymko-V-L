#ifndef PASSPORT_H
#define PASSPORT_H
#include <string>
#include <vector>


class Passport {
private:
	std::string first_name;
	std::string last_name;
	std::string id_number;
	std::string birth_date;

public:
	Passport(const std::string& firstName, const std::string& lastName, const std::string& idNumber, const std::string& birthDate);
	void display();

};
class ForeignPassport : public Passport {
public:
	ForeignPassport(const std::string& firstName, const std::string& lastName, const std::string& idNumber, const std::string& birthDate, const std::string& fgNumber);

	void addVisa(const std::string& visa);
	void display() ;

private:
	std::string fg_number;
	std::vector<std::string> visas;
};





























#endif