#include"Address.h"

int main()
{
	Address a1,a2;
	a1.Accept();
	a2.Accept();
	cout<<"\nComparing addresses using function"<<endl;
	a1.CompAdd(a2);
	cout<<"\nUsing operator Overloading"<<endl;
	if(a1==a2)
	{
		cout<<"Both addresses are same"<<endl;
	}
	else
	{
		cout<<"Both addresses are different"<<endl;
	}
	a1.Display();
	a2.Display();

	return 0;
}
