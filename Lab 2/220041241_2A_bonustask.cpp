#include<iostream>
using namespace std;


void display(int carn,string brand,string model,int year,string fueltype,int mileage)
{
  cout<<"car: "<<carn<<endl;
  cout<<"Brand: "<<brand<<endl;
  cout<<"Model: "<<model<<endl;
  cout<<"Year: "<<year<<endl;
  cout<<"Fuel type "<<mileage<<" km/l"<<endl;
}

void fuelefficiency(int mileage)
{   
    if(mileage==0)
    cout<<"This car is electric, efficiency measured in km/charge."<<endl;
    else if(mileage<=15)
    cout<<"This car is not fuel-efficient."<<endl;
   else
    cout<<"This car is fuel-efficient."<<endl;
}

float fuelconsumption(int mileage)
{
    return (100/mileage);
}

float fuelcostestimation(string fueltype,int mileage)
{
    float cost;
    if(fueltype=="Electric")
    return 0.0;
    if(fueltype=="Petrol")
    {
        cost=(100/mileage)*.89;
    }
    else if(fueltype=="Diesel")
    {
        cost=(100/mileage)*3.24;
    }
    else if(fueltype=="hybrid")
    {
        cost=(100/mileage)*2.45;
    }
    return cost;
}
int main()
{   
    int n,year,mileage;
    float cost;
    string brand,model,fueltype;
    cout<<"car number: ";
    cin>>n;
    cout<<"brand: ";
    cin>>brand;
    cin.ignore();
    cout<<"model: ";
    getline(cin,model);
    cout<<"year: ";
    cin>>year;
    cout<<"fuel type: ";
    cin>>fueltype;
    cout<<"mileage: ";
    cin>>mileage;
    display(n,brand,model,year,fueltype,mileage);
    fuelefficiency(mileage);
    cost=fuelcostestimation(fueltype,mileage);
    if(cost!=0.0)
    cout<<"Estimated fuel cost for 100 km:"<<" $"<<cost<<endl;

}