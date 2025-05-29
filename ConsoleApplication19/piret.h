#ifndef PIRATE_H
#define PIRATE_H
#include <iostream>
using namespace std;

class Pirate {
    string name_; 
    int age_;
    float amoutofGold_;
    bool IsAlive_;
public:
    Pirate(const string& name, int age);
    int give_Money();
    int give_away_Money();
    void GetInfo();

};

#endif