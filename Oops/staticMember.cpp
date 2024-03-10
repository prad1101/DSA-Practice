#include<iostream>
using namespace std;
class student
{
private:
    static int totalStudent;
    int rollNo;
    int age;
public:
    student()
    {
        totalStudent++;
    }
    int getAge()
    {
        return age;
    }
    int getrollNO()
    {
        return rollNo;
    }
    static int gettotalstudent()
    {
        return totalStudent;
    }

};
int student::totalStudent=0; // initialize static data member only outside the class
int main()
{
    student s1,s2,s3;
    cout<<student::gettotalstudent();

    return 0;
}
