#include <iostream>
#include "piret.h"
using namespace std;

int main()
{
    try {
        Pirate first ("Vasya", 0);
   first.give_Money();
   first.give_away_Money();
   first.rip_Pirate("Vasya", 0);
   first.GetInfo();


    }
    catch(const char* msg){
        cout << "Error: " << msg << endl;
    }
   
}
