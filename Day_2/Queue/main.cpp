#include <iostream>
#include <queue>
#include "QueueLinkedList.h"
#include "include/QueueLinkedList.h"

using namespace std;

int main()
{

 QueueLinkedList QueuObj ;

 QueuObj.Enqueue(30) ;
 QueuObj.Enqueue(40) ;
 QueuObj.Enqueue(50) ;
 QueuObj.Enqueue(60) ;
 QueuObj.Enqueue(70) ;

 QueuObj.display();

 std::cout << "Dequeu element " << QueuObj.Dequeue() << std::endl;
 std::cout << "Dequeu element " << QueuObj.Dequeue() << std::endl;
 std::cout << "Dequeu element " << QueuObj.Dequeue() << std::endl;

  QueuObj.display();

    return 0;
}
