#include<iostream>
using namespace std;
class Student
{
public:
    int age;
    const int rollNumber;
public:
    Student(int r):rollNumber(r)
    {

    }

};
int main()
{
    Student s(200);
    s.age=20;
    cout<<s.rollNumber;


    return 0;
}
