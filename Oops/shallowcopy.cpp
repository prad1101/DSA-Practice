#include<iostream>
#include<cstring>
using namespace std;
class Student
{
private:
    int age;
    char *name;

public:
    Student(int age,char *name)
    {
        this->age=age;
        //   this->name=name;  // this is the shallow copy generally we avoid shallow copy shallow copy only copy starting 0th address of the array not whole array
        this->name=new char[strlen(name)+1]; // this is deep copy make new array and copy it
        strcpy(this->name,name);
    }
    void print()
    {
        cout<<"age is = "<<age<<" and "<<"name = "<<name<<endl;
    }
};
int main()
{
    char arr[]="pradeep";
    Student s1(20,arr);
    s1.print();
    arr[2]='z';


    Student s2(30,arr);
    s2.print();
     s1.print();



    return 0;
}
