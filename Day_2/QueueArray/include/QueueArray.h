#ifndef QUEUEARRAY_H
#define QUEUEARRAY_H
#include <iostream>
#include <cstddef>

class QueueArray
{
    public:
    int * items ;
    int rear ;
    int front ;
    int size ;

        QueueArray(int _size)
        {
          items =  new int [_size] ;
          size =  _size;
          front = rear = -1 ;
        }

        ~QueueArray() {}



int isFull()
{
 if ((front == 0) && (rear == size-1))
 {
   return 1 ;
 }
 if (rear == front-1)
 {
  return 1 ;
 }
 return 0 ;
}
////////////////////////m is full method 


int isEmpty()
{
 if ((front == -1) && (rear == -1))
 {
   return 1 ;
 }
  if (front == rear+1 )
 {
   return 1 ;
 }
 return 0 ;
}
/////////////////////////////////////////////// is full method 

int enqueue(int data)
{
  if(isFull())
  {
   return 0 ;
  }
   if(isEmpty())
  {
    front = rear = 0 ;
    items[rear]=data;
  }else if(rear == size-1 && front != 0)
  {
    rear = 0 ;
    items[rear] =data ; 
  }else
  {
    rear ++ ;
    items[rear] = data ;
  }
  return 1 ;
}
///////////////////////////////////////// enqueue methods ends 

int dequeue()
{
 int data ;
 if(isEmpty())
 {
   throw  "Queue array is empty";
 }
    data = items[front];

 if (rear == front)
 {
   data = items[front] ;
   front = -1 ;
   rear = -1 ;
 }else if(front == size -1)
 {
    data = items[front] ;
    front = 0 ;
 }else
 {
    front++;
 }
   return data ;
}
///////////////////////////////////////// Denqueue methods ends 


 void display()
 {
    std::cout << "==================== Display on =================" << std::endl;
   int current = front ;
   while (current != rear)
   {
    if((current == size-1) && (rear < front))
    {
       current = 0 ;
       std::cout << items[current] << std::endl;
       current ++ ;
    }else
    {
     std::cout << items[current] << std::endl;
     current ++ ;   
    }     
   }

    std::cout << "==================== Display End =================" << std::endl;
 }

//////////////////////////////// displY 2 
void display_2()
{
    std::cout << "==================== Display Start =================" << std::endl;
    
    if (isEmpty())
    {
        std::cout << "Queue is empty!" << std::endl;
        return;
    }
    
    int current = front;
    while (true)
    {
        // Display the current item
        std::cout << items[current] << std::endl;

        // Break the loop if current reaches rear
        if (current == rear)
            break;

        // Move to the next index (wrap around if needed)
        current = (current + 1) % size;
    }

    std::cout << "==================== Display End ===================" << std::endl;
}

int getFront()
{
  if(front == -1)
  {
   throw "No Front data its empty" ;
  }else
  {
    return items[front];
  }
}
/////////////////////////////////// end GetFront 




int getRear()
{
  if(rear == -1)
  {
    throw " no rear data array is empty";
  }else
  {
    return items[rear];
  }
}
/////////////////////////////////// end GetFront 


};

#endif // QUEUEARRAY_H
