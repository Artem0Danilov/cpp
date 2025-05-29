#include "class.h"

int main()
{
	Car c1("lada", 1000, 5);
	Car c2("audi", 2000, 15);
	Car c3("ford", 1500, 6);

	c1.showInfo();
	c2.showInfo();
	c3.showInfo();

	c1.drive(100);
	c1.drive(10);
	c1.drive(500);
	c1.refill(1000);
	c1.refill(500);
	c2.drive(10);
	c2.refill(150);
	c3.drive(250);

	c1.showInfo();
	c2.showInfo();
	c3.showInfo();
}