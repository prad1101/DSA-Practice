#include<iostream>
#include<set>
using namespace std;

int main()
{

    set<int> s;
    s.insert(10);
    s.insert(10);
    s.insert(30);
    s.insert(3);

    set<int>:: iterator itr;
    for(itr=s.begin();itr!=s.end();itr++)
    {
        cout<<*itr;
    }

//    int size;
//    int start=0;
//    cout<<"Enter size of array "<<endl;
//    cin>>size;
//    int end=size-1;
//    int arr[size];
//    for(int i=0; i<size; i++)
//    {
//        cin>>arr[i];
//    }
//    cout<<"Before Swapping"<<endl;
//    for(int i=0; i<size; i++)
//    {
//        cout<<arr[i];
//    }
//     cout<<endl;
//    while(start<=end)
//    {
//        swap(arr[start],arr[end]);
//        start++;
//        end--;
//    }
//
//    cout<<"After Swapping"<<endl;
//
//    for(int i=0; i<size; i++)
//    {
//        cout<<arr[i]<<" ";
//    }



    return 0;
}
