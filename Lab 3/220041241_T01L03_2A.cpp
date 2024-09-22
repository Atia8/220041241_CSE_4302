#include<iostream>
using namespace std;


class Temperature
{

  private:
  int Increment,temp;
  public:
  Temperature(int currenttemp)
  {
    temp=currenttemp;
    Increment=0;
  }
  
  void setIncrementStep(int incstep)
  {
    Increment=incstep;
  }
  int getTemperature()
  {
    return temp;
  }
  void increment()
  {
    temp=temp+Increment;
  }
  void resetTemperature()
  {
    temp=0;
  }
};

int main()
{
    Temperature t1(20);
    int step=5;
    t1.setIncrementStep(step);
    t1.increment();
    cout<<t1.getTemperature()<<endl;
    t1.resetTemperature();
    cout<<t1.getTemperature()<<endl;
}