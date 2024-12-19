#include <cstddef>
#include <iostream>

#include "include/StackLinkedList.h"

using namespace std;


int main()
{
  StackLinkedList Sll ;

  Sll.Push(20);
  Sll.Push(30);
  Sll.Push(40);
  Sll.Push(50);
  Sll.Push(60);
  Sll.Display() ;

  Sll.pop();  // 60
  Sll.pop();  // 50
  Sll.pop();  // 40
  Sll.pop(); // 30
 Sll.Display() ;
  
   cout<< Sll.peek() <<endl ;

    return 0;
}
