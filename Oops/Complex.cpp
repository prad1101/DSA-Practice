#include<iostream>
using namespace std;
class Complex
{
private:
    int real, imaginary;
public:
    Complex(int real,int imaginary)
    {
        this->real=real;
        this->imaginary=imaginary;
    }
    Complex add(Complex &c1)
    {
        Complex c(0,0);
        c.real=real + c1.real;
        c.imaginary = imaginary + c1.imaginary;
        return c;
    }

    Complex multiply(Complex  &c1)
    {

        c1.real=real * c1.real;
        c1.imaginary = imaginary * c1.imaginary;
        return c1;
    }
    void print()
    {
        cout<<real<<" + "<<imaginary<<"i"<<endl;
    }


};
int main()
{
    int real, imaginary;
    cout<<"Enter real and imaginary number"<<endl;
    cin>>real>>imaginary;
    int choice;
    cout<<"Enter what to do add or multiply"<<endl;
    cin>>choice;
    Complex C1(real,imaginary);
    Complex C2(real,imaginary);
    Complex x(0,0);
    switch(choice)
    {

    case 1:
        x=  C2.add(C1);
        x.print();
        break;
    case 2:
        x= C2.multiply(C1);
        x.print();
        break;
    default:
        cout<<"Invalid option";

    }
    \

    C2.print();
    C1.print();



}
