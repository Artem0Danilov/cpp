#include <iostream>
#include "piret.h"

using namespace std;

Pirate::Pirate(const string& name, int age):
     name_(name), age_(age), amoutofGold_(0) {};
    int Pirate:: give_Money(){
        cout << "Add how money you want take\n";
        int number;
        cin >> number;
        amoutofGold_+= number;
        return amoutofGold_;

    }
    int Pirate::  give_away_Money(){
        cout << "Add how money you want give away\n";
        int number;
        cin >> number;
        amoutofGold_-= number;
        return amoutofGold_;

    }
    void Pirate:: GetInfo(){
        cout << "---------------------\n";
        cout <<  "Name: " << name_ << endl;
        cout << "Gold: " << amoutofGold_ << endl;
        cout << "Age: " << age_ << endl;
        cout << "----------------------\n";

    }


    

    
