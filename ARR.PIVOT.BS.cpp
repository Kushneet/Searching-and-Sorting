#include <iostream>
using namespace std;
int PIVOTBS(int arr[],int size)
{
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;//defined here so that scope can take mid from the beginning
    while(start<end){
    if(arr[mid]>=arr[0])
        {
           start=mid+1; // it's in the 1st inclination of the graph
        }
     else  {
              end=mid; // if arr[mid]<arr[0]
            }
     mid=start+(end-start)/2;

    }
  return start; // end can be too start==end
}
int main() 
{
    int arr[6]={10,12,14,2,3,4};
    int arr1[9]={10,12,14,17,0,1,2,3,4};
    cout << "Pivot index for arr is: " << PIVOTBS(arr,6) << endl;
    cout << "Pivot index for arr1 is: " << PIVOTBS(arr1,9) << endl; 
}