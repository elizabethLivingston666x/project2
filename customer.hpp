#ifndef CUSTOMER_HPP
#define CUSTOMER_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <stdlib.h>

class Customer
{

  private:
    float timeEvent;
    float startOfServiceTime;
    Customer* nextCustomer;
    bool isArrival;

  public:
    Customer();
    void setTimeEvent(float, bool);
    float getTimeEvent();



};

#endif
