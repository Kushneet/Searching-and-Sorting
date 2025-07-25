#include <iostream>
using namespace std;
void BUBBLESORT(int arr[],int size)
{    for(int i=1;i<size;i++) // for each time thhe element at ith index is relocated
    {
        bool swapped=false;
        for (int j=0;j<size-i;j++)  // To compare adjacent elements
        {
            if(arr[j+1]<arr[j])
            {
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if (swapped==false) //automatically break whenever sorting is complete
        break; //rather then looping for n-i times
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
    int arr[6]={12,20,0,1,43,23};
    cout << "original array: " << endl;
    printarray(arr,6);
    cout << endl;
    cout << "sorted array: " << endl;
    BUBBLESORT (arr,6);
    printarray(arr,6);
    return 0;
}