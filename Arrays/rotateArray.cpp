#include<iostream>
using namespace std;
void leftrotatebyoneArray(int arr[],int length)
{
    int temp=arr[0];
    for(int i=0; i<length-1; i++)
    {
        arr[i]=arr[i+1];
    }
    arr[length-1]=temp;
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
    int arr[]= {1,2,3,4,5,6,7,8,9,10};
    int length=sizeof(arr)/sizeof(arr[0]);
    int rotatevalue=0;
    cout<<"Enter no of time you want to rotate array";
    cin>>rotatevalue;
    for(int i=0; i<rotatevalue; i++)
    {

        leftrotatebyoneArray(arr,length);
    }


    printarray(arr,length);
}
