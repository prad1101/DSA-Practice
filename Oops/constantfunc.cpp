#include<iostream>
using namespace std;
class Student
{
   private:
       int age;
       int rollno;
   public:
       Student(int a,int b)
       {
           this->age=a;
           this->rollno=b;

       }
        int getAge() const
        {
            return age;
        }
        int getRollNO() const
        {
            return rollno;
        }
        void setAge(int a)
        {
            age=a;
        }
        void setRollno(int a)
        {
            rollno=a;
        }
};
int main()
{
    Student const a(10,10);
    cout<<a.getAge();
    a.setAge(45);

    return 0;
}
