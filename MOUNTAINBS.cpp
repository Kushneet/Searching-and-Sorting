#include <iostream>
using namespace std; 
int peakindex(int arr[],int size)
{
    int start=0;
    int end=size-1;
    
    while(start<end)
    {
        int mid=start+(end-start)/2; //should be inside while loop Recalculate mid every time
        if(arr[mid]<arr[mid+1])
        {
            start=mid+1;
        }
        else if(arr[mid]>arr[mid+1])
        {
            end=mid;
        }
        
    }
    return start;    
}

int main()
{
    int arr[5]={4,5,8,2,1};
    cout << "Peak index is: " << peakindex(arr,5) << endl;
    int arr1[6]={4,5,3,2,1,0};
    cout << "Peak index is: " << peakindex(arr1,6);
}
