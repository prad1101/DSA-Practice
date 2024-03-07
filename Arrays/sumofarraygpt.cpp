#include<iostream>
using namespace std;
int sumofarray(int arr[],int length)
{
    int sum=0;
    for(int i=0; i<length; i++)
    {
        sum+=arr[i];
    }
    return sum;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int length=sizeof(arr)/sizeof(arr[0]);
    int result=sumofarray(arr,length);
    cout<<"Sum of element is = "<<result;

    return 0;
}
