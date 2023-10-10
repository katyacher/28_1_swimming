#include "swimmer.h"

void Swimmer::setName(const std::string inName){
    name = inName; 
};

std::string Swimmer::getName(){
    return name;
};

void Swimmer::setSpeed(int inSpeed){
    speed = inSpeed;
};

void Swimmer::timeInc(){
    time++;
};
    
int Swimmer::getDistance(){
    if(distance > 100) return 100;
    return distance;
};

void Swimmer::calcDistance(){
    distance = time * speed;
};

void Swimmer::printInfo(){
    std::cout << "swimmer " << getName() << " " << "distance = " << getDistance() << std::endl;
};

int Swimmer::getResult(){
    return distance/speed;
};
