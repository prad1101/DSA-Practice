#include<iostream>
using namespace std;
int main()
{
    int n;
    int sum=0;
    cout<<"Enter Number of element in array"<<endl;
    cin>>n;
    int arr[n];

    //Taking input loop
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    //printing  array loop
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //calculation sum loop
    for(int j=0; j<n; j++)
    {
        sum=sum+arr[j];
    }

    //printing sum
    cout<<sum<<endl;

    return 0;

}
