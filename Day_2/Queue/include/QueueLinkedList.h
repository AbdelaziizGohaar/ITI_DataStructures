#ifndef QUEUELINKEDLIST_H
#define QUEUELINKEDLIST_H
#include <cstddef>
#include <iostream>
#include "NodeQueue.h"

class QueueLinkedList
{
    public:
     NodeQueue * front ;
     NodeQueue * rear ;

        QueueLinkedList() 
        {
        rear = NULL; 
        front = NULL ;            
        }
        ~QueueLinkedList() {}

  void Enqueue (int data)
  {
     NodeQueue * newNode =  new NodeQueue(data);
     if(front == NULL && rear ==NULL)
     {
        rear = front = newNode;
        return ;
     }
     rear-> next= newNode ;
     rear = newNode ;
  }
/////////////////////////////////////// Enqueue methods end 
 int Dequeue ()
 {
  int data = 0 ;
  if(front == NULL)
  {
    throw  "Queue is Empty";
  }
  NodeQueue * temp = front ;
  data = front->data ;
  front = front->next;
  if(front == NULL)
  {
    rear = NULL ;
  }
  delete temp ;
  return data ; 

 }
/////////////////////////////////////// Dequeue methods end 

void display()
{
  NodeQueue * current = front ;
  std::cout << "============== Display Begin =============" << std::endl;

  while (current != NULL)
  {
    std::cout <<  current->data << std::endl;
    current = current ->next;
  }
  std::cout << "============== Display End  =============" << std::endl;
}

//////////////////////////// Dispaly Methods Code 






};

#endif // QUEUELINKEDLIST_H
