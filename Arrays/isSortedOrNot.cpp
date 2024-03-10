#include<iostream>
using namespace std;
 int isSorted(int arr[],int length)
 {
     for(int i=0;i<length-1;i++)
     {
         if(arr[i] > arr[i+1])
         {
            return 0;
         }
     }
     return 1;
 }
 int main()
 {
     int arr[]={1,2,3,3,4,6,6};
     int length=sizeof(arr)/sizeof(arr[0]);
     int flag=isSorted(arr,length);

     cout<<flag;

     return 0;
 }
