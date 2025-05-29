#ifndef HOCKEYPLAYER_H
#define HOCKEYPLAYER_H

#include <string>

class HockeyPlayer {
private:
    std::string name;      // Имя игрока
    int age;               // Возраст
    std::string position;  // Позиция игрока
    int goalCount;         // Количество забитых голов

public:
    
    HockeyPlayer(const std::string& playerName, int playerAge,
        const std::string& playerPosition, int goals = 0);

    
    void scoreGoal();                  // счетчик голов
    void printInfo() const;            // инфа об игроке
    void changePosition(const std::string& newPosition); // Меняет позицию

   
    std::string getName() const;
    int getGoals() const;
};

#endif // HOCKEYPLAYER_H
