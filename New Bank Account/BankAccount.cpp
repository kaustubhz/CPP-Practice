#include"BankAccount.h"

BankAccount::BankAccount():amount(1000)
{
cout<<"\nBank Account opened (with Default amt)";
}
BankAccount::BankAccount(int amt):amount(amt)
{
cout<<"\nBank Account opened (with User amt)";
}

int BankAccount::Deposit(int d)
{
	cout<<"Deposit in Bank account";
	//return (amount-d);
}

int BankAccount::Withdraw(int w)
{
	cout<<"Withdrawl in Bank Account";
	//return (amount+w);
}

void BankAccount::CalcInterest()
{
	cout<<"\nInterest Details";
}

void BankAccount::Display()
{
	cout<<"\nAccount Details";
}
BankAccount::~BankAccount()
{
	//delete this;
	cout<<"\nBankAccount DTOR"<<endl;	
}


