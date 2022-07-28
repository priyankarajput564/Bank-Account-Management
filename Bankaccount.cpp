#include<iostream>
#include<complex>
#include<math.h>

using namespace std;
class Account
{
public:
  int acno;
  char cname[20],typeac[15];
  Account()
  {
   cout<<"Enter Customer name:";
   cin>>cname;
   cout<<"\nEnter account number:";
   cin>>acno;
   cout<<"\nEnter your type of account:";
   cin>>typeac;
  }

};//Parent class

class Sav_acct : public Account
{
public:
  float r,a,b;
  int n,t;
  
//constructor for taking values
  Sav_acct()
  {
  cout<<"\nEnter the balance in your account:";
  cin>>b;
  cout<<"\nBalance in your account is:"<<b;
  }
  
//function to calculate compound interest
  double compound_interest()
  {
   cout<<"\nEnter interest rate:";
   cin>>r;
   cout<<"\nEnter no. of time interest applied per time:";
   cin>>n;
   cout<<"\nEnter no. of time period:";
   cin>>t;
   a=b*pow((1+r/n),n*t);
   cout<<"\nCompound interest is:"<<a;
  }
  
  //function to withdrawal case
  double withdrawal()
  {
   int x;
   int amount;
   cout<<"\nDo you want to withdrawal case 1.yes or 2.no:";
   cin>>x;
   if(x==1)
   {
    cout<<"Enter amount you want to withdrawal:";
    cin>>amount;
    a=a-amount;
    cout<<"Balance in your account is:"<<a;
   }
   else
    {
    cout<<"Balance in your account is:"<<a;
    }
  }
};

class Cur_acct: public Account
{
public:
   float p;

//constructor for taking values
  Cur_acct()
  {
  cout<<"\nEnter the balance in your account:";
  cin>>p;
  cout<<"\nBalance in your account is:"<<p;
  }
  
//function to issue cheque book
  void cheque_book()
  {
   int y;
   cout<<"\nDo you want cheque book 1.yes or 2.no:";
   cin>>y;
   if(y==1){
   cout<<"\nYou received cheque book within one week.";
   }
   else{
    cout<<"\nThankyou";
   }
  }
  
  //function to imposed penalty 
  double min_balance()
  {
   if(p<5000){
    cout<<"\nYour balance is less than 5000 therefore penalty of rs.200 is imposed";
    p=p-200;
    cout<<"\nYour balance after penalty is:"<<p;
    }
    else{
    cout<<"\nYour balance is above 5000 therefore no penalty imposed ";
    cout<<"\nYour balance is:"<<p;
    }
   }
};

int main()
{

int c;
cout<<"If your account is saving type then give input 1 and if it is current type then give input 2:";
cin>>c;

 if(c==1)
  {
  Sav_acct ob1;
  ob1.compound_interest();
  ob1.withdrawal();
  }
 else if(c==2)
  {
  Cur_acct ob2;
  ob2.cheque_book();
  ob2.min_balance();
  }
  else{
   cout<<"\nWrong choice";
  }

return 0;
}

    
