#pragma once
#include <iostream>

class Car {
private:
	std::string brand;
	int maxPetrol;
	int currPetrol;
	int run;
	int petrolPerMile;
public:
	Car (const std::string& brand, int maxPetrol, int petrolPerMile) 
		: brand(brand), maxPetrol(maxPetrol), currPetrol(maxPetrol), run(0), petrolPerMile(petrolPerMile){}
	void showInfo();
	void drive(int miles);
	void refill(int petrol);
};