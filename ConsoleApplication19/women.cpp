#include "women.h"
#include <iostream>
using namespace std;
  Women:: Women(const string& name, int age) 
	  : name_(name), age_(age), virnumber_(0), parnumber_(0), isAlive_(true), hp_(100)
  {}
  void Women::funnylove() {
	  int count = 0;
	  while (isAlive_) {
		  count++;
		  virnumber_+= 2;
		  parnumber_ += 1;
		  if (virnumber_ > 10 ) {
			  hp_ -= 50;
				  if (hp_ <= 0) {
					  isAlive_ = false;
				  }
		  }
		  cout << " Number of partner" << parnumber_ << endl;
		  cout << " Number of vir.problems" << virnumber_ << endl;
		  cout << "------------Number of cycle---------" << count << "----------Number of cycle---------" << endl;
	  }
  }
  void showInfo() {
	  count << isAlive_ << endl;
  }