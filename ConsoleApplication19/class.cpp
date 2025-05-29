#include "class.h"

void Car::showInfo() {
	std::cout << "------------\n";
	std::cout << "Brand: " << brand << std::endl;
	std::cout << "Max petrol: " << maxPetrol << std::endl;
	std::cout << "Current petrol: " << currPetrol << std::endl;
	std::cout << "Run: " << run << std::endl;
	std::cout << "Petrol per mile: " << petrolPerMile << std::endl;
	std::cout << "------------\n";
}

void Car::drive(int miles) {
	if ((petrolPerMile * miles) > currPetrol) {
		std::cout << "Not enough petrol\n";
	}
	else {
		std::cout << "Driving!\n";
		run += miles;
		currPetrol -= petrolPerMile * miles;
	}
}

void Car::refill(int petrol) {
	if ((currPetrol + petrol) > maxPetrol) {
		std::cout << "Too much petrol\n";
	}
	else {
		std::cout << "Refilled!\n";
		currPetrol += petrol;
	}
}