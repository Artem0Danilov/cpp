#include <iostream>
#include "piret.h"
using namespace std;

int main()
{
   Pirate first ("Vasya", 50);
   first.give_Money();
   first.give_away_Money();
   first.GetInfo();
}
