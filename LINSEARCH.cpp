#include <iostream>
using namespace std;
bool search(int arr[],int size,int key) // arr[]remember
{
    for(int i=0;i<size;i++)
    {
        if (arr[i]==key){
        return 1; // true
    }
}
return 0; // false
}
int main()
{
    int key;
    int arr[10]={1,4,-20,210,23,4,98,123,-600,0};
    cout << "Enter key: " ;
    cin >> key ;
    bool found= search(arr,10,key);  // Storing the result of function call It's not renaming the fxn itself
    if (found==1) // we can directly use the fxn call here 
    { // if (search(arr, 10, key))
        cout << "key exists" << endl;   
    }
    else cout << "doesn't" << endl;

}