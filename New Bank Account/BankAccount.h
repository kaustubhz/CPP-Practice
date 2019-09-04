#ifndef BankAccount_H
#define BankAccount_H
#include<iostream>
#include<string>
using namespace std;

class BankAccount
{
	private:
		int amount;
	public:
		BankAccount();
		BankAccount(int);
		virtual int Deposit(int);
		virtual int Withdraw(int);
		virtual void CalcInterest();
		virtual void Display();
		virtual ~BankAccount();
};

class Current: public BankAccount
{
	private:
		float rate;
		int totalbal;
	public:
		Current();
		Current(int);	       
		int Deposit(int);
		int Withdraw(int);
		void CalcInterest();
		void Display();
		~Current();
};

class Saving:public BankAccount
{
	private:
		float rate;
		int totalbal;
	public:
		Saving();
		Saving(int);
		int Deposit(int);
		int Withdraw(int);
		void CalcInterest();
		void Display();
		~Saving();
};

#endif
