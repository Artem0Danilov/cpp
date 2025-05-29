#ifndef WOMEN_H
#define WOMEN_H
#include <iostream>
using namespace std;
class Women {
private:
	string name_;
	int age_;
	int virnumber_;
	int parnumber_;
	bool isAlive_;
	int hp_;
public:
	Women(const string& name, int age);
	void funnylove();
	void showInfo();
};
#endif 