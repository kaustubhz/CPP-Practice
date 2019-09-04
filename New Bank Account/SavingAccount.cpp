#include"BankAccount.h"

Saving::Saving()
{
cout<<"\nSaving account created (with default amt)";
}

Saving::Saving(int amt):totalbal(amt)
{
cout<<"\nSaving account created (with user amt)";
}
int Saving::Deposit(int d)
{
	cout<<"\nDeposited Amount: "<<d;
	totalbal=totalbal+d;
	Display();
}

int Saving::Withdraw(int w)
{
	cout<<"\nCash withdrawn: "<<w;
	totalbal=totalbal-w;
	Display();
}

void Saving::Display()
{
	cout<<"\nBalance is "<<totalbal<<endl;
}

void Saving::CalcInterest()
{
	cout<<"\nInterest is: "<<totalbal*0.04;
	totalbal=totalbal+(totalbal*0.04);
	Display();
}
Saving::~Saving()
{
	cout<<"\nSaving Account removed";
}
