#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
using namespace std;

#include "Node.h"
// #include <cstddef>

class LinkedList
{
    public:
    Node * head ;
    Node * tail ;
     int nodeCount ;

        LinkedList()
         {
           head = NULL;
           tail = NULL;
           nodeCount = 0;
         }

        ~LinkedList() {}

        void add(int data)
        {
          nodeCount ++ ;
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
             tail = newNode ;
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
          while(current !=NULL)
          {
            cout<<current->data <<endl;
            current = current->next ;
          }
        }/// end method Display


Node* Search(int searchData) /// this is helper Function :)
{
    Node* current = head;

    while (current != NULL)
     {
        if (current->data == searchData)
        {
            return current;
        }
        current = current->next;
    }
  return NULL;
}


void InsertAfter(int data, int afterData)
{
  Node* searchNode =  Search(afterData) ;

 if(searchNode != NULL)
 {
  nodeCount ++;
  Node *newNode = new Node(data);

  Node *b = searchNode->next ;
/// old node pointing to my new Node
  searchNode->next = newNode ;
  b->prev = newNode ;
  /// my node pointing
  newNode->next = b;
  newNode->prev = searchNode;

 }else
 {
  cout << "No Node with Such Data" << endl;
 }

}/// end of method insert After


void InsertBefore(int data , int beforeData)
{
  Node* searchNode =  Search(beforeData) ;

 if(searchNode != NULL)
 {
  nodeCount ++;
  Node *newNode = new Node(data);

  Node *a = searchNode->prev ;
/// old node pointing to my new Node
  searchNode->prev = newNode ;

  if (a != NULL)
  {
    a->next = newNode; // If 'a' exists, update its 'next'
  } else
  {
    head = newNode; // New node becomes the head
  }

 // a->next = newNode ;

  /// my node pointing
  newNode->prev = a;
  newNode->next = searchNode;
 }else
 {
  cout << "No Node with Such Data" << endl;
 }

}/// end of method insertBefore


int GetCount()
{
  return  nodeCount;
}

int GetDataByIndex(int index)
{
 int currentIndex = 1 ;
 Node* current = head;

 while (current != NULL)
  {
    if(currentIndex == index)
    {
      return current->data ;
    }else
    {
        currentIndex ++;
    }
  }

 return  0;
}




};

#endif // LINKEDLIST_H
