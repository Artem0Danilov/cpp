#include "HockeyPlayer.h"
#include <iostream>

int main() {
    setlocale(LC_ALL, "ru");
   
    HockeyPlayer ovechkin("Александр Овечкин", 37, "Нападающий", 820);

    
    ovechkin.printInfo();
    ovechkin.scoreGoal();
    ovechkin.changePosition("Левый нападающий");

    std::cout << "\nТекущее количество голов: " << ovechkin.getGoals() << "\n";

   
}