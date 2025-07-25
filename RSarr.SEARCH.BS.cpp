#include <iostream>
using namespace std;
int PIVOTBS(int arr[],int size)
{
    int start=0;
    int end=size-1;
    while(start<end){
      int mid=start+(end-start)/2;
    if(arr[mid]>=arr[0])
        {
           start=mid+1; // it's in the 1st inclination of the graph
        }
     else  {
              end=mid; // if arr[mid]<arr[0]
            }
    }
  return start; // end can be too start==end
}
int BINARYSEARCH(int arr[],int s,int e,int key)
{
  int start=s; //positions can't be fixed
  int end=e;   // since it is being used as a function
  while(start<=end)
  {
     int mid=start+(end-start)/2;
    if(arr[mid]>key)
    {
      end=mid-1;
    }
    else if(arr[mid]<key)
    {
      start=mid+1;
    }
    else 
    {
      return mid;
    }
  }
  return -1; // not found
}
int SEARCH(int arr[],int size,int key)
{
   int pivot=PIVOTBS(arr,size); // to know pivot's value
   if (key>=arr[pivot] && key<=arr[size-1])
   {
      return BINARYSEARCH(arr,pivot,size-1,key); // arr,start,end,key
   }
   else // if (key<arr[pivot])
   {
      return BINARYSEARCH(arr,0,pivot-1,key);
   }
   return -1;
}
int main() 
{
    int arr[6]={10,12,14,2,3,4};
    int key=12;
    int key1=11;
    cout << "key is present at index: " << SEARCH(arr,6,key) << endl;
    cout << "key 1 is present at index: " << SEARCH(arr,6,key1) << endl;
}

    