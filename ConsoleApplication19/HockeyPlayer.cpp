#include <iostream>
#include "HockeyPlayer.h"



HockeyPlayer::HockeyPlayer(const std::string& playerName, int playerAge,
    const std::string& playerPosition, int goals)
    : name(playerName), age(playerAge),
    position(playerPosition), goalCount(goals) {
}


void HockeyPlayer::scoreGoal() {               
    goalCount++;
    std::cout << name << " забил гол! Всего голов: " << goalCount << "\n";
}


void HockeyPlayer::printInfo() const {
    std::cout << "\n--- Информация об игроке ---\n"
        << "Имя: " << name << "\n"
        << "Возраст: " << age << "\n"
        << "Позиция: " << position << "\n"
        << "Голы: " << goalCount << "\n";
}


void HockeyPlayer::changePosition(const std::string& newPosition) {                
    position = newPosition;
    std::cout << name << " теперь играет на позиции: " << position << "\n";
}


std::string HockeyPlayer::getName() const {
    return name;
}

int HockeyPlayer::getGoals() const {
    return goalCount;
}