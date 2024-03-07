#include<iostream>
using namespace std;
int main()
{
    int n;
    int largest=INT_MIN;
    cout<<"Enter Number Of Element in array"<<endl;
    cin>>n;
    cout<<"Initial mininum no"<<largest<<endl;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<n; i++)
    {
        if(arr[i] > largest)
        {
            largest=arr[i];
        }
    }
    cout<<"Largest element is"<<largest<<endl;
    return 0;
}
