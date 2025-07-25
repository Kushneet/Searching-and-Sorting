#include <iostream>
using namespace std;
bool ispossible(int arr[],int size,int m,int mid)
{
    int studentcount=1; // student number 1
    int Pagesum=0; // Pages allocated to current student

    for(int i=0;i<size;i++)
    {   // If adding current book doesn't exceed limit, allocate it
        if(Pagesum+arr[i]<=mid) 
        {
            Pagesum+=arr[i];
        }
        else
        { // Otherwise, allocate to next student
           studentcount++;
           if(studentcount > m || arr[i]>mid)
           { // If number of students exceeds limit or a book itself is larger than mid
               return false;
           }
           Pagesum=arr[i];// Start allocating pages to the new student
        }
    } 
    return true; // Allocation is possible with current mid
}

int BOOKALLOCATION(int arr[],int size,int m)
{
    int start=0;
    int sum=0;
    for(int i=0;i<size;i++) 
    {
        sum+=arr[i];
    }
    int end=sum; // Maximum pages any student might get = sum of all pages
    int ans=-1; // To store the final answer (min possible max pages)
     while(start<=end)
     {
         int mid=start+(end-start)/2;
    
        if(ispossible(arr,size,m,mid))
        {
            ans=mid;
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
        mid=start+(end-start)/2;
     }
     return ans; // Minimum of the maximum number of pages
}
int main()
{
    int m;
    cout << "number of students: ";
    cin >> m;
    int arr[5]={10,20,30,40,50};
    cout << "Book Allocated as: " << BOOKALLOCATION(arr,5,m);
}