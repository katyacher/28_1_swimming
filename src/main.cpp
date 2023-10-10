#include <iostream>
#include <string>
#include <thread>
#include <vector>
#include <algorithm>
#include <mutex>
#include "swimmer.h"

std::vector<std::pair<int, std::string>> results;
std::mutex result_accsess;
std::mutex stdout_accsess;

void swim(int time, std::string name, int speed){
    Swimmer swimmer;
    swimmer.setName(name);
    swimmer.setSpeed(speed);

    while(swimmer.getDistance() < 100){
        std::this_thread::sleep_for(std::chrono::seconds(time));
        swimmer.timeInc();
        swimmer.calcDistance();
        
        stdout_accsess.lock();
        swimmer.printInfo();
        stdout_accsess.unlock();
    }

    result_accsess.lock();
    results.push_back({swimmer.getResult(), swimmer.getName()});
    result_accsess.unlock();
};


int main(int, char**){
    std::cout << "Hello, from 28_1_swimming!\n";

    int time = 1;

    std::vector <std::thread> tracks;
    
    std::vector<std::string> names(6);
    std::vector<int> speeds(6);

    for(int i = 0; i < 6; i++){
        std::cout << "Swimmer № " << i + 1 << std::endl;
        std::cout << "Type a name: ";
        std::cin >> names[i];
        std::cout << names[i] << "'s speed: ";
        std::cin >> speeds[i];
        while(std::cin.fail()){
            std::cin.clear();
            std::cin.ignore();
            std::cout << "Not a number. Try again: " << std::endl;
            std::cin.clear();
            std::cin.ignore();
            std::cin >> speeds[i];
        }
    }

    for(int i = 0; i < 6; i++){
        tracks.push_back (std::thread(swim, time, names[i], speeds[i]));
    }
    
    for(int i = 0; i < tracks.size(); i++){
        tracks.at(i).join();
    }
    
    result_accsess.lock();

    std::sort(results.begin(), results.end(), [](const auto& el1, const auto& el2) { return el1.first < el2.first;});
    
    std::cout << "\n*****Results***** \n";
    for (const auto& result: results){
        std::cout << result.first << " : " << result.second << std::endl;
    }
    result_accsess.unlock();

    return 0;
};
