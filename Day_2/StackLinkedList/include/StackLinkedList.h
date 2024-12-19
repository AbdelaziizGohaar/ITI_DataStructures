#ifndef STACKLINKEDLIST_H
#define STACKLINKEDLIST_H
#include <cstddef>
#include <iostream>
#include "StackNode.h"

using namespace std;

class StackLinkedList
{
    public:
     StackNode *tail ;
     
        StackLinkedList() 
        {
            tail = NULL;
        }
        ~StackLinkedList() {}

   void Push(int data)
   {
    StackNode *newNode = new StackNode(data);
    
    if(tail == NULL)
    {
        tail = newNode ;
        return; ;
    }
      newNode ->prev = tail ;
      tail = newNode ;
   }
   ////////// end of Puch method   

  int pop()
  {
    if(tail == NULL)
    {
      throw "Stack is Empty zezzoo ";
    }
    StackNode * temp = tail ;
    tail = tail->prev;
    int data = temp->data ;
    delete  temp ;
    return data ;
  }
/////////////// end of pop methodssss


int peek()
{
   if (tail ==NULL)
   {
    throw  "Stack is Empty";
   }
   return tail->data ;

}
/////////////// peek end metods ////////



void Display()
{
   StackNode *current = tail ;
     cout << "============Display==============" << endl;
   while (current != NULL)   
   {
     cout << current->data << endl;
     current = current->prev;
   }
     cout << endl;
}



};

#endif // STACKLINKEDLIST_H
