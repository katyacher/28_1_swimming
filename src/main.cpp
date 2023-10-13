#include <iostream>
#include <string>
#include <thread>
#include <atomic>  
#include <vector>
#include <algorithm>
#include <mutex>
#include "swimmer.h"

std::vector<std::pair<int, std::string>> results;
std::mutex result_accsess;
std::mutex stdout_accsess;
std::atomic<bool> ready (false);

void swim(int time, std::string name, int speed){
    while(!ready){                  // wait until main() sets ready...
        std::this_thread::yield();
    }

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

    std::thread tracks[6];
    std::string name;
    int speed;

    for(int i = 0; i < 6; i++){
        std::cout << "Swimmer № " << i + 1 << std::endl;
        std::cout << "Type a name: ";
        std::cin >> name;
        std::cout << name << "'s speed: ";
        std::cin >> speed;
        while(std::cin.fail()){
            std::cin.clear();
            std::cin.ignore();
            std::cout << "Not a number. Try again: " << std::endl;
            std::cin.clear();
            std::cin.ignore();
            std::cin >> speed;
        }
    
        tracks[i] = std::thread(swim, time, name, speed);
    }
    
    ready = true;

    for(auto& track : tracks) track.join();
    
    result_accsess.lock();

    std::sort(results.begin(), results.end());
    
    std::cout << "\nResults: \n";
    for (const auto& result: results){
        std::cout <<  result.first << " : " << result.second << std::endl;
    }
    result_accsess.unlock();

    return 0;
};
