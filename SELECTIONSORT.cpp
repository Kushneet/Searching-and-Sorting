#include <iostream>
using namespace std;
void SELECTIONSORT(int arr[],int size)
{    for(int i=0;i<size;i++)
    {
        int MinIndex=i;
        for(int j=i+1;j<size;j++) // i+1 to avoid comparing already sorted parts
        {
            if(arr[j]<arr[MinIndex])
            {
                MinIndex=j;
            }
            
        }  
        swap(arr[i],arr[MinIndex]); 
    }
}
void printarray(int arr[],int size) // remember
{
   for(int i=0;i<size;i++)
   {
    cout << arr[i] << " ";
   }
}
int main()
{
    int arr[6]={12,21,0,1,43,23};
    cout << "original array: " << endl;
    printarray(arr,6);
    cout << endl;
    cout << "sorted array: " << endl;
    SELECTIONSORT(arr,6);
    printarray(arr,6);
    return 0;
}