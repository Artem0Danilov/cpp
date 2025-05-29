#include <iostream>
#include "HockeyPlayer.h"



HockeyPlayer::HockeyPlayer(const std::string& playerName, int playerAge,
    const std::string& playerPosition, int goals)
    : name_(playerName), age_(playerAge),
    position_(playerPosition), goalCount_(goals) {
}


void HockeyPlayer::scoreGoal() {               
    goalCount_++;
    std::cout << name_ << " забил гол! Всего голов: " << goalCount_ << "\n";
}


void HockeyPlayer::printInfo() const {
    std::cout << "\n--- Информация об игроке ---\n"
        << "Имя: " << name_ << "\n"
        << "Возраст: " << age_ << "\n"
        << "Позиция: " << position_ << "\n"
        << "Голы: " << goalCount_ << "\n";
}


void HockeyPlayer::changePosition(const std::string& newPosition) {                
    position_ = newPosition;
    std::cout << name_ << " теперь играет на позиции: " << position_ << "\n";
}


std::string HockeyPlayer::getName() const {
    return name_;
}

int HockeyPlayer::getGoals() const {
    return goalCount_;
}