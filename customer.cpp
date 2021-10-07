#include "customer.hpp"


Customer::Customer()
{
  this->timeEvent = 0;
  this->isArrival = false;

}

void Customer::setTimeEvent(float timeInterval, bool isArrival)
{

  this->timeEvent = timeInterval;
  this->isArrival = isArrival;

}

float Customer::getTimeEvent()
{
  return this->timeEvent;
}
