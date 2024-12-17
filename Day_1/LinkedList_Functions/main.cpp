#include <iostream>
#include "LinkedList.h"

using namespace std;

int main()
{

LinkedList azizLl ;
azizLl.add(6);
azizLl.add(7);
azizLl.add(9);

azizLl.InsertAfter(100,7);
azizLl.InsertBefore(900,6);
cout<<"data of index one : "<<azizLl.GetDataByIndex(1)<<endl;
cout<<"element count is "<<azizLl.GetCount()<<endl;
cout<<"element in linkedlist is : "<<endl;
azizLl.display();
    return 0;
}
