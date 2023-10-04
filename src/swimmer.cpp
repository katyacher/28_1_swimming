#include "swimmer.h"

void Swimmer::setName(const std::string inName){
    name = inName; 
};

std::string Swimmer::getName(){
    return name;
};

void Swimmer::setVelocity(int inVelocity){
    velocity = inVelocity;
};

void Swimmer::timeInc(){
    time++;
};
    
int Swimmer::getDistance(){
    if(distance > 100) return 100;
    return distance;
};

void Swimmer::calcDistance(){
    distance = time * velocity;
};

void Swimmer::getInfo(){
    std::cout << "swimmer " << getName() << " " << "distance = " << getDistance() << std::endl;
};

int Swimmer::getResult(){
    return distance/velocity;
};
