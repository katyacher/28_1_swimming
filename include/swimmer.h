#include <iostream>
#include <string>

class Swimmer{
    std::string name;
    int speed;
    int distance;
    int time{0};
    int result;
public:
    void setName(const std::string inName);
    std::string getName();
    void setSpeed(int inSpeed);
    void timeInc();
    int getDistance();
    void calcDistance();
    void printInfo();
    int getResult();
};