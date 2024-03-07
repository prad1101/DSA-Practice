#include<iostream>
#include<cstring>
using namespace std;
class Student
{
private:
    int age;
public:
    char *name;
    Student(int age,char *name)
    {
        this->age=age;
        this->name= new char[strlen(name)+1];
        strcpy(this->name,name);

    }

    Student(  Student const  & s)
    {
        this->age=s.age;
        //this->name=s.name; //this is shallow copy
        this->name=new char[strlen(s.name)+1];
        strcpy(this->name,s.name);
    }
    void print()
    {
        cout<<age<<name<<endl;
    }
    ~Student()
    {
        delete[] name;
    }

};
int main()
{

    char arr[]="pradeep";
    Student s1(20,arr);
    s1.print();
    Student s2(s1);
    s2.name[2]='z';
    s1.print();
    s2.print();

    return 0;
}
