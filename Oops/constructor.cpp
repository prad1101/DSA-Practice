#include<iostream>
using namespace std;
class Fraction
{

private:
    int dino,nimo;
public:
    Fraction(int d, int n)
    {
        this->dino=d;
        this->nimo=n;

    }
    void print()
    {
        cout<<dino<<"/"<<nimo<<endl;
    }
       void simplyfy()
    {
        int gcd=1;
        int j = min(this->nimo,this->dino);
        for(int i=1; i<=j; i++)
        {
            if(nimo%i==0 && dino%i==0)
            {
                gcd=i;
            }
        }

        nimo=nimo/gcd;
        dino=dino/gcd;

    }
    void add(Fraction F2)
    {
        int lcm=dino * F2.dino;
        int x=lcm/this->dino;
        int y=lcm/F2.dino;
        int num=x*nimo + y*F2.nimo;

        nimo=num;
        dino=lcm;
        simplyfy();
    }

    int multiply(Fraction F2)
    {
        int result=nimo * F2.nimo;

        return result;
    }


};
int main()
{
    Fraction F(10,2);
    Fraction F2(15,4);
    F.add(F2);
        cout<<F.multiply(F2);
            return 0;
}
