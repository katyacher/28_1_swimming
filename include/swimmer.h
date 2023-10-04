#include <iostream>
#include <string>

class Swimmer{
    std::string name;
    int velocity;
    int distance;
    int time{0};
    int result;
public:
    void setName(const std::string inName);
    std::string getName();
    void setVelocity(int inVelocity);
    void timeInc();
    int getDistance();
    void calcDistance();
    void getInfo();
    int getResult();
};