#include <iostream>
using namespace std;
void INSERTIONSORT(int arr[],int size)
{
    for(int i=0;i<size-1;i++) // for looping each card around the array
    {
    int temp=arr[i]; // giving an initial value for the card to compare to
    int j=i-1; // 1st comparision is with adjacent card
    while(j>=0 && arr[j]>temp)
    {
      arr[j+1]=arr[j]; // j+1 takes the value of j and vice versa
      j--;
    }   
   arr[j+1]=temp; // temp remain const for multiple changes in j 
 }
}
void PRINT(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[6]={12, 20, 0, 1, 43, 23};
    cout << "unsorted array: " << endl;
    PRINT(arr,6);
    cout << endl;
    cout << "Sorted: " << endl;
    INSERTIONSORT(arr,6);
    PRINT(arr,6);
    cout << endl;
}
