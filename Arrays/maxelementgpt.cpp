#include<iostream>
using namespace std;
int maximuminarray(int arr[],int length)
{
    int maxelement=INT_MIN;
    for(int i=0; i<length; i++)
    {
        if(maxelement < arr[i])
        {
            maxelement=arr[i];
        }
    }
    return maxelement;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,1};
    int length=sizeof(arr)/sizeof(arr[0]);

    int maxElement=maximuminarray(arr,length);
    cout<<"Maximumelement in array is = "<<maxElement;
    return 0;
}
