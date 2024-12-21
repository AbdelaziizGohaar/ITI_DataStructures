#include "include/LinkedList.h"
#include "include/Node.h"
#include <iostream>

using namespace std;


// Function to swap using pass by reference
void swappping(int& a, int& b) {
  int temp = a;
    a = b;
    b = temp;
//    cout << "Inside swapByReference: a = " << a << ", b = " << b << endl;
}


void Bubble_Sort_Array(int *arr , int size )
{
  int iteration = 0;
  int sorted = 0 ;

  for (int outer = 0; sorted == 0; outer++)
  {
    sorted = 1;
    for (int i = 0; i < size - 1 - outer ; i++)
    {
       if(arr[i] > arr[i+1])
       {
          swappping(arr[i], arr[i+1]) ;
          sorted = 0 ;
       }
        iteration ++;  ////////////////////////////// iteration Count here
    }
  }
}







int main()
{

 LinkedList azizList ;

 azizList.add(20);
 azizList.add(3);
 azizList.add(7);
 azizList.add(110);
 azizList.add(4);

 std::cout << "=========Display data of linkedlist Before sort ========= " << std::endl;
 azizList.display();

std::cout << " ========= Bubble sort Display of data =========" << std::endl;
 azizList.Bubble_Sort_LinkedList(&azizList);
 azizList.display();

   cout << " =========End of Sorting Data Display ========= " << endl;

   cout << " ============================ " << endl;
    int BinaryLikedlist_Index = azizList.BinarySearch( 7); 
     std::cout << "the Searched Index is " << BinaryLikedlist_Index << std::endl;

    
    return 0;
}
