#include<iostream>
#include<cstring>
using namespace std;

int lengthofstring(char str[])
{
    int count=0;
    for(int i=0;str[i]!='\0';i++)
    {
        count++;
    }
    return count;

}

void reversestring(char str[])
{
    int start=0;
    int end=lengthofstring(str)-1;
    while(start<end)
    {
        swap(str[start],str[end]);
        start++;
        end--;
    }

}

void owncpyfunc(char str1[],char str2[])
{
    int n=strlen(str2);

    for(int i=0;i<n;i++)
    {
        str1[i]=str2[i];
    }
    str1[strlen(str2)]='\0';

}

void owncatfunc(char str1[],char str2[])
{
    int n=strlen(str2);
    int end=strlen(str1);
    for(int i=0; i<n; i++)
    {
        str1[end]=str2[i];
        end++;
    }
    str1[end]='\0';
}

int owncmpfunc(char str1[],char str2[])
{
    int n = strlen(str1);
    for(int i=0; i<n; i++)
    {
        if(strlen(str1) != strlen(str2)) return -2;

        if(str1[i]!=str2[i])
        {
            if(str1[i]>str2[i])
            {
                return 1;
            }
            else
            {
                return -1;
            }
        }

    }
     return 0;

}


void ownstrncpyfunc(char str1[],char str2[],int count)
{
    int n=strlen(str2);
    for(int i=0; i<count; i++)
    {
        str1[i]=str2[i];
    }
}

int main()
{
//    char arr[100];
//    cin.getline(arr,100);
//    reversestring(arr);
//     cout<<arr;
//
//    In built function arr
//    strcpy,strcmp,strcat,strlen,strncoy
//        char arr[10]="abcgy";
//
//        for(int i=strlen(arr); i>=0; i--)
//        {
//            for(int j=strlen(arr); j>=i; j--)
//            {
//                cout<<arr[j];
//
//            }
//            cout<<endl;
//        }
//
//
//        for(int i=strlen(arr); i>=0; i--)
//        {
//            for(int j=i; j>=0; j--)
//            {
//                cout<<arr[j];
//            }
//            cout<<endl;
//        }
      //  char arr2[12]="prtay";

        //strncpy(arr,arr2,4);
        //cout<<arr;
      //  cout<<owncmpfunc(arr,arr2);
        // cout<<strcmp(arr,arr2);

        //strcpy(arr,arr2);
        //strcat(arr,arr2);
        //
//        owncpyfunc(arr,arr2);
       //owncatfunc(arr,arr2);
        //cout<<arr
       // ;
        //cin.getline(arr,20);
        //cout<<strlen(arr);


    return 0;
}
