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
void rightrotatebyoneArray(int arr[],int length)
{
   // one method
    int temp=arr[length-1];

    for(int i=length-1;i>=0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=temp;

}
void printarray(int arr[],int length)
{

    for(int i=0; i<length; i++)
    {
        cout<<arr[i]<<" ";
    }

}
void reverseA(int arr[],int low,int high)
{
    while(low<high)
    {
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }
}
void rotatebydposition(int arr[],int length,int d)
{
    reverseA(arr,0,d-1);
    reverseA(arr,d,length-1);
    reverseA(arr,0,length-1);
}
int main()
{
    int arr[]= {1,2,3,4,5,6,7,8,9,10};
    int length=sizeof(arr)/sizeof(arr[0]);
    rotatebydposition(arr,length,2);

//    rightrotatebyoneArray(arr,length);
//    int rotatevalue=0;
//    cout<<"Enter no of time you want to rotate array";
//    cin>>rotatevalue;
//    for(int i=0; i<rotatevalue; i++)
//    {
//        rightrotatebyoneArray(arr,length);
//    }


    printarray(arr,length);
}
