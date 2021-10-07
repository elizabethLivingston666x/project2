#include "simulation.hpp"


Simulation::Simulation()
{
  this->currentTime = 0;
  this->loadFile("test1.txt");
  this->addArrivals();
}

void Simulation::run()
{


}


void Simulation::addArrivals()
{

  for(int i = 0; i < 20 && numArrivals > 0; ++i)
  {
    float newTimeInterval = this->getNextRandomInterval(this->mu);

    this->heap.addEvent((newTimeInterval + this->currentTime), true);

    this->currentTime = this->currentTime + newTimeInterval;
  }

}

float Simulation::getNextRandomInterval(int avg)
{

  struct timespec nanoseconds;
  clock_gettime(CLOCK_MONOTONIC, &nanoseconds);
  srand((time_t)nanoseconds.tv_nsec);

  float random = static_cast<float>(rand()) / static_cast<float>(RAND_MAX);
  float timeInterval = (-1 * (1.0/avg) * log(random));


  return timeInterval;

}

void Simulation::loadFile(std::string file)
{

  std::ifstream input;
  input.open(file);

  std::string line;


  std::getline(input, line);
  this->lambda = stoi(line);

  std::getline(input, line);
  this->mu = stoi(line);

  std::getline(input, line);
  this->channels = stoi(line);

  std::getline(input, line);
  this->numArrivals = stoi(line);

}
