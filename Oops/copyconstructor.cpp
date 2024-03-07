#include<iostream>
using namespace std;
class Student
{
private:
    int age;
public:
    Student(int a)
    {
        this->age=a;
    }
    void display()
    {
        cout<<age;
    }
};
int main()
{
    Student s(10);
    //in built copy constructor called
    Student s1(s);


    s1.display();


}
