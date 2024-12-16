#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"

class LinkedList
{
    public:
    Node * head ;
    Node * tail ;

        LinkedList()
         {
           head = NULL;
           tail = NULL;
         }

        ~LinkedList() {}

        void add(int data)
        {
           if (head == NULL)
           {// add Node First
             Node *newNode = new Node(data);
             head = newNode ;
             tail = newNode ;
           }else
           { // add Node last
             Node *newNode = new Node(data);
             tail->next = newNode ;
             newNode->prev = tail ;
             taile = newNode ;
           }
        }/// end of Function ADD


        void display()
        {
          Node * current = head;
          if(current == NULL)
          {
          cout<<"Empty LinkedList"<<endl;
            return ;
          }
          if(current !=NULL)
          {
            cout<<current->data <<endl;
            current = current->next ;
          }



        }/// end method Display












//    protected:

//    private:
};

#endif // LINKEDLIST_H
