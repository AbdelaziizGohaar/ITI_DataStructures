#include "include/QueueArray.h"
#include <iostream>

using namespace std;

int main()
{

 QueueArray arrQueue(5) ;

 arrQueue.enqueue(10);
 arrQueue.enqueue(20);
 arrQueue.enqueue(30);
 arrQueue.enqueue(40);

 arrQueue.display_2();

 std::cout << "Dequed element is " << arrQueue.dequeue() << std::endl;
 std::cout << "Dequed element is " << arrQueue.dequeue() << std::endl;
 

 arrQueue.display_2();




    return 0;
}
