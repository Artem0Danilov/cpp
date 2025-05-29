#ifndef HOCKEYPLAYER_H
#define HOCKEYPLAYER_H

#include <string>

class HockeyPlayer {
private:
    std::string name;      
    int age;               
    std::string position;  
    int goalCount;         

public:
    
    HockeyPlayer(const std::string& playerName, int playerAge,
        const std::string& playerPosition, int goals = 0);

    
    void scoreGoal();                  
    void printInfo() const;            
    void changePosition(const std::string& newPosition); 

   
    std::string getName() const;
    int getGoals() const;
};

#endif // HOCKEYPLAYER_H
