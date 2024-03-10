#include<iostream>
using namespace std;
class Mathematics
{
private:
    int num1;
    int num2;
public:
    Mathematics()
    {
        num1=num2=0;
    }
    int getNum1()
    {
        return num1;
    }
    int getNum2()
    {
        return num2;
    }
    void setNum1(int num1)
    {
        this->num1=num1;
    }
    void setNum2(int num2)
    {
        this->num2=num2;
    }
    Mathematics operator+(Mathematics m)
    {
        Mathematics temp;
        temp.num1=num1+m.num1;
        temp.num2=num2+m.num2;
        return temp;
    }
    Mathematics operator-(Mathematics m)
    {
        Mathematics temp;
        temp.num1=num1-m.num1;
        temp.num2=num2-m.num2;
        return temp;
    }
    bool operator==(Mathematics m)
    {
        return (num1==m.num1 && num2==m.num2);
    }
    void print()
    {
        cout<<num1<<" "<<num2;
    }
    //pre increment

    Mathematics& operator++()
    {
        num1++;
        num2++;

        return *this;
    }

    //post increment
    Mathematics operator++(int)
    {
        num1++;
        num2++;
        return *this;
    }


};
int main()
{

    Mathematics m1;
    m1.setNum1(10);
    m1.setNum2(20);

    Mathematics m2;
    m2.setNum1(10);
    m2.setNum2(20);
    m1.print();
    Mathematics m4= m1++;
    m1.print();
    m4.print();

    //Mathematics result = m1 + m2;
    //result.print();
//
//    if(m1==m2)
//    {
//        cout<<"Both are equal";
//    }
//    else
//    {
//        cout<<"nahh";
//        }
    return 0;
}
