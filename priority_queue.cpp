#include "priority_queue.hpp"

PriorityQueue::PriorityQueue()
{
  this->heap.push_back(nullptr);
  this->heapSize = 0;
}

bool PriorityQueue::isEmpty()
{
  bool empty = true;

  if(this->heapSize > 0)
  {
    empty = false;
  }

  return empty;
}

void PriorityQueue::addEvent(float timeInterval, bool isArrival)
{

  Customer* newCustomerEvent = new Customer();
  newCustomerEvent->setTimeEvent(timeInterval, isArrival);
  this->heap.at(0) = newCustomerEvent;
  this->heap.push_back(nullptr);

  int slot = this->heapSize + 1;


  while(newCustomerEvent->getTimeEvent() < this->heap.at(slot/2)->getTimeEvent())
  {
    this->heap.at(slot) = this->heap.at(slot/2);
    slot /= 2;
  }

  this->heap.at(slot) = this->heap.at(0);
  this->heap.at(0) = nullptr;
  this->heapSize++;

}
