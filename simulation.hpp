#ifndef SIMULATION_HPP
#define SIMULATION_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <tgmath.h>

#include "priority_queue.hpp"

class Simulation
{

  private:
    int lambda;
    int mu;
    int channels;
    int numArrivals;

    int avaliableChannels;
    float currentTime;

    PriorityQueue heap;


  public:
    Simulation();
    void run();
    void initiatePriorityQueue();
    void addArrivals();
    float getNextRandomInterval(int);
    void loadFile(std::string);


};

#endif
