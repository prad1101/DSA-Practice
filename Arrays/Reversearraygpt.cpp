#include<iostream>
using namespace std;

void swap(int &first,int &second)
{
    int temp=first;
    first = second;
    second=temp;
}
void reversearray(int arr[],int length)
{
    int start=0;
    int end=length-1;

    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void reversesecondmethod(int arr[],int length)
{
    int temp[length+1];
    for(int i=length-1, j=0; i>=0; i--,j++)
    {
        temp[j]=arr[i];
    }
    for(int i=0; i<length; i++)
    {
        arr[i]=temp[i];
    }
}
void printarray(int arr[],int length)
{
    for(int i=0; i<length; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int length=sizeof(arr)/sizeof(arr[0]);
    reversesecondmethod(arr,length);
    printarray(arr,length);

    return 0;
}
