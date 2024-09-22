#include<iostream>
using namespace std;

class Bank_account
{
   private:
   string customername,accounttype;
   int accnum,balance;
   public:
   Bank_account()
   {
    balance=0;
   }
   void customerDetails(string name,int accnumber)
   {
      customername=name;
      accnum=accnumber;
   }
   void accountType(string type)
   {
     accounttype=type;
   }
   void Balance()
   {
    cout<<"Balance: "<<balance<<endl;
   }
   void deposit(int deposit)
   {
    balance=balance+deposit;
    cout<<"Balance: "<<balance<<endl;
   }
   void withdraw(int withdraw)
   {
      if(balance<withdraw)
      cout<<"Balance is less"<<endl;
      else
      balance=balance-withdraw;
   }
   void display()
   {
    cout<<"Name: "<<customername<<endl;
    cout<<"account number: "<<accnum<<endl;
    cout<<"Type of account: "<<accounttype<<endl;
    cout<<"Balance amount: "<<balance<<endl;

   }
};

int main()
{
    Bank_account bankacc;
    bankacc.customerDetails("Rina",220041241);
    bankacc.accountType("saving");
    bankacc.deposit(100);
    bankacc.withdraw(20);
    bankacc.display();
}