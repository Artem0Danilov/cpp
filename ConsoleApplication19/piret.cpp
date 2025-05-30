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

    int Pirate::rip_Pirate(const string &name, int age)
    {

            if (age == 0) {
            throw "Age can't be zero";
        }
        
            if (age > 70){
                cout << "Pirate rip from beer\n";
                cout << "You must search place for body and tell about this parents pirate\n";
                int sum_Rip;
                cout << " Add sum what you want spend for funeral\n";
                cin >> sum_Rip;
                amoutofGold_ -= sum_Rip;
        }
            if (age <= 70){
            cout << "You are a alive and can breathe deeply\n";
        }
         return amoutofGold_;

    }