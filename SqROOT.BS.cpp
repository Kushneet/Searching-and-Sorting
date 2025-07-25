#include <iostream>
using namespace std;
int SQUAREROOT(int key)
{
    int start=0;
    int end=key; // series from 0 to key(number to be taken root of)
    int mid=start+(end-start)/2;
     int answer=-1;// to store best possible mid value
    while(start<=end)
    {
         int mid = start + (end - start) / 2;// use long long
        int square=mid*mid;
        if(square>key) 
        {
           end=mid-1;
        }
        else if(square<key)
        {
            answer=mid;
           start=mid+1;
           
        }
        else if(square==key)
        {
            return mid;
        }
        mid=start+(end-start)/2; // to update mid
    }
    return answer;// final value of ans used
}
double PRECISESqRoot(int key, int precision, int SQUAREROOT)
{
    double factor=1; // factor is going to become decimal 
    double answer=SQUAREROOT; // from SquareRoot
    for(int i=0;i<precision;i++) // precision is upto the number of decimal
    {
        factor=factor/10;
        for(double j=answer;j*j<key;j+=factor) // j=ans; initial value eg 6
        {
            answer=j; // value being updated eg. 6+0.1
        }
    }
    return answer; // returning updated ans
}
int main()
{
    int key;
    cout << "Enter key: " << endl;
    cin >> key;
    int precision;
    cout << "Enter precision: " << endl;
    cin >> precision;

        int intRoot = SQUAREROOT(key); // integer part of square root
    double finalRoot = PRECISESqRoot(key, precision, intRoot); // refined root
    cout << "Square root of " << key << " = " << finalRoot << endl;

}