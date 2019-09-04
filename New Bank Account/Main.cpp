#include"BankAccount.h"

int main()
{
	//Saving s;
	BankAccount *sa=new Saving(1200);
//	Saving sa(10000);
	sa->Deposit(1000);
	sa->Withdraw(1000);
	sa->CalcInterest();
	delete sa;
//	Current ca(12000);
	BankAccount *c=new Current(1000);
	c->Deposit(2000);
	c->Withdraw(500);
	c->CalcInterest();
//	c->Display();
	delete c;

	return 0;
}
