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
     int size; // Track the size of the LinkedList

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
            size++;
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
    size++;
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
    size++;
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



Node * GetNode_ByIndex(int index)
{
 int currentIndex = 1 ;
 Node* current = head;

 while (current != NULL)
  {
    if(currentIndex == index)
    {
      return current ;
    }else
    {
        currentIndex ++;
    }
  }

 return  0;
}

////////////////////////////////////////////////////// Sorting data And Searching Data Methods 


// Function to swap the data of two nodes
void swapping_LinkedList(Node* a, Node* b) {
    int temp = a->data;
    a->data = b->data;
    b->data = temp;
}
///////////// SWapping data Linkedlist end 
 
void Bubble_Sort_LinkedList(LinkedList *L_List )
{
  int iteration = 0;
  int sorted = 0 ;

   if (!L_List || !L_List->head) { 
        cout << "The list is empty or invalid!" << endl;
        return;
    }
  for (Node *outer = L_List->tail; sorted == 0; outer = outer->prev)
  { 
       sorted = 1;
    for (Node *inner = L_List->head ; inner->next != outer->next ; inner = inner->next)
    {  
      int dataBefore = inner->data ;
      int dataAfter = inner->next->data ;

       if( dataBefore > dataAfter)
       {
          swapping_LinkedList( inner, inner->next) ;
          sorted = 0 ;
       }
        iteration ++;  ////////////////////////////// iteration Count here
    }
  }
}


///////////// Bubble Sortinggg data Linkedlist End 


int BinarySearch_LinkedList( int Target)
{
    Node *Start = head;
    Node *End = tail;
    int Mid = 0;
    int iteration = 0; 

    while (Start->next <= End) 
    {
        iteration++;
        Mid = (Start->data + End->data) / 2;

        if (GetDataByIndex(Mid) == Target) 
        {
            //std::cout << "Binary Search Iteration is " << iteration << std::endl;
            return Mid;
        }
        else if (GetDataByIndex(Mid) > Target) // Search in the left half
        {
          Node * current =  GetNode_ByIndex(Mid) ;
            End = current->prev ;
        }
        else // Search in the right half
        {
            Node * current =  GetNode_ByIndex(Mid) ;
            Start = current ->next ;
        }
    }
    std::cout << "Binary Search Iteration is " << iteration << std::endl;
    return -1;
}


 int BinarySearch_(int target){
         int start = 0;
        int  end =size-1;
        int middle =0;
        while(start<=end){
            middle = (start + end) / 2;
            Node * current = head;
            for (int i=0; i< middle; i++){
                current = current->next;
            }
            if (current->data == target){
                return middle;
            }
            else if (current->data >target)
            {
                end = middle - 1;
            }
             else if (current->data < target)
            {
                start = middle + 1;
            }
        }
        return -1;
     }

  int BinarySearch(int target) {
        int start = 0;
        int end = size - 1;
        int middle = 0;

        while (start <= end) {
            middle = (start + end) / 2;

            Node* current = head;
            for (int i = 0; i < middle; i++) {
                current = current->next;
            }

            if (current->data == target) {
                return middle; // Found the target
            } else if (current->data > target) {
                end = middle - 1; // Narrow to left
            } else {
                start = middle + 1; // Narrow to right
            }
        }

        return -1; // Target not found
    }




};

#endif // LINKEDLIST_H
