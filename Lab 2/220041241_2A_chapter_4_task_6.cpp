#include<iostream>
using namespace std;
int main()
{
    enum etype {laborer,secretary,manager,accountant,executive,researcher};
    etype type;
   char t1;
     
     cout<<"Enter employee type (first letter only) (laborer,secratory,manager,accountant,executive,researcher):";

    
     cin>>t1;
    if(t1=='l')
    type=laborer;
    else if(t1=='s')
     type=secretary;
    else if(t1=='m')
    type=manager;
    else if(t1=='a')
    type=accountant;
    else if(t1=='e')
     type=executive;
    else if(t1=='r')
      type=researcher;

   switch(type)
   {
    case 0: cout<<"laborer";
    break;
    case 1:cout<<"secretary";
    break;
    case 2: cout<<"manager";
    break;
    case 3:cout<<"accountant";
    break;
    case 4:cout<<"executive";
    break;
    case 5:cout<<"researcher";
    break;
   }

}