#include<iostream>
using namespace std;
 struct numbers
 {
  int numerator1,numerator2;
  int denomerator1,denomerator2;
 };
int main()
{
  numbers v1;
  char e;
  cout<<"Enter first fraction: ";
  cin>>v1.numerator1>>e>>v1.denomerator1;
  cout<<"Enter second fraction: ";
  cin>>v1.numerator2>>e>>v1.denomerator2;
  cout<<"Sum = ";
  cout<<(v1.numerator1*v1.denomerator2+v1.numerator2*v1.denomerator1)<<"/"<<(v1.denomerator1*v1.denomerator2);
}