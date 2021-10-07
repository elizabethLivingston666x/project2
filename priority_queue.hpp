#ifndef PRIORITY_QUEUE_HPP
#define PRIORITY_QUEUE_HPP

#include<vector>

#include "customer.hpp"

class PriorityQueue
{

  private:

    int heapSize;
    std::vector<Customer*> heap;



  public:

    PriorityQueue();

    bool isEmpty();
    void addEvent(float, bool);
    Customer* processNext();

};


#endif
