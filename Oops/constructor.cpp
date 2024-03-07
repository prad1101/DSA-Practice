#include<iostream>
using namespace std;

class Person
{
private:
    string name;
    int age;
    public:
        int getAge()
        {
            return age;
        }
        void setage(int a)
        {
            age=a;

        }
        string getName()
        {
            return name;
        }
        void setName(string n)
        {
            name=n;
        }

};
int main()
{
    Person p;

    p.setName("Pradeep");
    cout<<p.getName();

    return 0;
}
