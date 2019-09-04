#include"BankAccount.h"

Current::Current():totalbal(1000)
{
cout<<"\nCurrent account created (with default amt)";
}

Current::Current(int amt):totalbal(amt)
{
cout<<"\nCurrent account created (with user amt)";
}
int Current::Deposit(int d)
{
        cout<<"\nDeposited Amount: "<<d;
        totalbal=totalbal+d;
        Display();
}

int Current::Withdraw(int w)
{
        cout<<"\nCash withdrawn: "<<w;
        totalbal=totalbal-w;
        Display();
}

void Current::Display()
{
        cout<<"\nBalance is "<<totalbal<<endl;
}

void Current::CalcInterest()
{
        cout<<"\nInterest is: "<<totalbal*0.055;
        totalbal=totalbal+(totalbal*0.055);
        Display();
}

Current::~Current()
{
	cout<<"\nCurrent Account removed";
}
