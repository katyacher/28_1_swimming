#include <iostream>
#include <string>
#include <thread>
#include <mutex>
#include <map>
#include "swimmer.h"

std::map<int, std::string> results;
std::mutex result_accsess;
std::mutex stdout_accsess;

void swim(int time, std::string name, int velocity){
    
    Swimmer swimmer;
    swimmer.setName(name);
    swimmer.setVelocity(velocity);
    

    while(swimmer.getDistance() < 100){
        std::this_thread::sleep_for(std::chrono::seconds(time));
        swimmer.timeInc();
        swimmer.calcDistance();
        stdout_accsess.lock();
        swimmer.getInfo();
        stdout_accsess.unlock();
    }

    stdout_accsess.lock();
    std::cout << swimmer.getName() << " finished the track" << std::endl;
    stdout_accsess.unlock();

    result_accsess.lock();
    results.emplace(swimmer.getResult(), swimmer.getName());
    result_accsess.unlock();
};


int main(int, char**){
    std::cout << "Hello, from 28_1_swimming!\n";

    int time = 1;

    //std::string name;
    //std::cin >> name;
    //int velocity;
    //std::cin >> velocity;
    
    std::thread track1(swim, time, "Swimmer 1", 25);
    std::thread track2(swim, time, "Swimmer 2", 15);
    std::thread track3(swim, time, "Swimmer 3", 20);
    std::thread track4(swim, time, "Swimmer 4", 5);
    std::thread track5(swim, time, "Swimmer 5", 8);
    std::thread track6(swim, time, "Swimmer 6", 10);

    track1.join();
    track2.join();
    track3.join();
    track4.join();
    track5.join();
    track6.join();

    result_accsess.lock();
    std::cout << "Results: \n";
    for (auto result: results){
        std::cout << result.first << " " << result.second << std::endl;
    }
    result_accsess.unlock();
};
