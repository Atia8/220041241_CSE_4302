#include <iostream>
using namespace std;

class RationalNumber
{
private:
    int Numerator, Denominator, notzero;

public:
    RationalNumber()
    {
        notzero = 1;
    }
    void assign(int numerator, int denominator)
    {
        Numerator = numerator;
        if (denominator == 0)
        {
            cout << "You can not assign 0 as denominator" << endl;
            notzero = 0;
        }
        else
        {
            Denominator = denominator;
        }
    }

    float convert()
    {
        if (notzero == 1)
        return(static_cast<float>(Numerator)/static_cast<float>(Denominator));
        else
        return 0.0;
    }
    void invert(int numerator, int denominator)
    {
        if (Numerator == 0)
        {
            cout << "You can not assign 0 as denominator.Inversion Failed" << endl;
        }
        else
        {
            Denominator=numerator;
            Numerator=denominator;
        }
    }
    void print()
    {   
        if(notzero==0)
        {
            cout<<"Denomninator cannot be zero"<<endl;
        }
        else
        cout<<"The Rational Number is "<<Numerator<<"/"<<Denominator<<endl;
    }
};


int main()
{
    int n=5,d=2;
    RationalNumber rationalnumber;
    rationalnumber.assign(n,d);
    rationalnumber.print();
    cout<<rationalnumber.convert()<<endl;
    rationalnumber.invert(n,d);
    rationalnumber.print();
}
