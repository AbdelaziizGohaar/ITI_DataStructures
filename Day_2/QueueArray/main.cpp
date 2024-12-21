#include "include/QueueArray.h"
#include <iostream>

using namespace std;

int main()
{

 QueueArray arrQueue(5) ;

try
{

 arrQueue.enqueue(10);
 arrQueue.enqueue(20);
 arrQueue.enqueue(30);
 arrQueue.enqueue(40);
 arrQueue.enqueue(50);
  arrQueue.enqueue(60);
   arrQueue.enqueue(70);
 arrQueue.display_2();

 std::cout << "Dequed element is " << arrQueue.dequeue() << std::endl;
 std::cout << "Dequed element is " << arrQueue.dequeue() << std::endl;
  std::cout << "Dequed element is " << arrQueue.dequeue() << std::endl;
   std::cout << "Dequed element is " << arrQueue.dequeue() << std::endl;

 arrQueue.enqueue(1000);
  arrQueue.enqueue(60);
   arrQueue.enqueue(70);

 arrQueue.display_2();

  std::cout << "front now is "<< arrQueue.getFront() <<  std::endl;
    std::cout << "rear now is "<< arrQueue.getRear() <<  std::endl;
 //arrQueue.getFront();
}
catch (const char e)
{
  std::cerr << "Caught exception " << e << std::endl;
}



    return 0;
}
