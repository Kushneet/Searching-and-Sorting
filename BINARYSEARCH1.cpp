#include <iostream>
using namespace std;
int BINARYSEARCH(int arr[],int size,int key)
{ // OPTIMISATION IN NOTES
    int start=0;
    int end=size-1;
    while(start<=end)
    {
        int mid= (start+end)/2;
        if(arr[mid]=key) // mid is not taken because it is an index
        {
            return key;
        }
        else if(arr[mid]>key){
        end=mid-1;
        }
        else start=mid+1;
    }
    return -1;  // because no valid index can be -ve but can be 0
}
int main() 
{
    int key;
    cout << "key is: ";
    cin >> key;
    int arr[6]={1,3,5,8,90};
    int arr1[8]={1,4,6,8,9,110};
    int found=BINARYSEARCH(arr,5,key);
    if(found==-1)
    {
        cout << "key not found" << endl;
    }
    else  cout << "found" << endl;
     int found1=BINARYSEARCH(arr1,6,key);
    if(found1==-1)
    {
        cout << "key not found" << endl;
    }
    else  cout << "found" << endl;
}