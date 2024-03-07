#include<iostream>
using namespace std;

void printarray(int arr[][3],int m, int n)
{
       for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {

            cout<<arr[i][j];
        }
        cout<<endl;
    }
}
int main()
{
//    int m,n;
//    cout<<"Enter row and column in 2d array"<<endl;
//    cin>>m>>n;
//    int arr[m][n];
//    for(int i=0; i<m; i++)
//    {
//        for(int j=0; j<n; j++)
//        {
//
//            cin>>arr[i][j];
//        }
//      //  cout<<endl;
//
//    }

int arr[3][3]={
    {1,2,3},
    {1,2,3},
    {1,2,3}

};
printarray(arr,3,3);




    return 0;
}
