#include <iostream>

using namespace std;

int Linear_Search(int *arr ,int size ,int Target)
{
int iteration = 0;

   for (int i = 0; i < size; i++)
   {
    iteration ++ ;
    if(arr[i] == Target)
    {
     std::cout << "Liner Search Iteration is " << iteration <<std::endl;   
     return i;
    }     
   }
    std::cout << "Liner Search Iteration is " << iteration <<std::endl;  
return -1;
}


int Binary_Search(int *arr, int size, int Target)
{
    int Start = 0;
    int End = size - 1;
    int Mid = 0;
    int iteration = 0; 

    while (Start <= End) 
    {
        iteration++;
        Mid = (Start + End) / 2;

        if (arr[Mid] == Target) 
        {
            std::cout << "Binary Search Iteration is " << iteration << std::endl;
            return Mid;
        }
        else if (arr[Mid] > Target) // Search in the left half
        {
            End = Mid - 1;
        }
        else // Search in the right half
        {
            Start = Mid + 1;
        }
    }
    std::cout << "Binary Search Iteration is " << iteration << std::endl;
    return -1;
}

int main()
{
 int linear ; 
 int binary ; 

 int arr[10] = {1,2,3,4,5,6,7,8,9};

 linear =  Linear_Search(arr,10,7);
    std::cout << "Liner Search Index is " << linear <<std::endl;  

 binary = Binary_Search(arr,10,7);
    std::cout << "Binary Search Index is " << binary <<std::endl;  
    return 0;
}
