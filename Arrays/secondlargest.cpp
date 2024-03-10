#include<iostream>
using namespace std;

int secondlargestinarray(int arr[],int length)
{
    int max=INT_MIN;
    int secondmax=INT_MIN;
    for(int i=0;i<length;i++)
    {
        if( max  <  arr[i])
        {
            secondmax=max;
            max=arr[i];
        }
    }
    return secondmax;
}

int main()
{
    int arr[]={6,9,4,7,2};
    cout<<secondlargestinarray(arr,5);

    return 0;
}
