#include "Complex.h"

int main()
{
	Complex x[5];
	for(int i=0;i<5;i++)
	{
		x[i].Accept();
	}
	for(int i=0;i<5;i++)
	{
		x[i].Display();
	}
	int number;
	cout<<"Enter no. to Search = "<<endl;
	cin>>number;

	Complex::search(x,5,number);

	/*	int flag;
		for(int i=0;i<5;i++)
		{
		flag=0;
		if(x[i].search(number)==1)
		{
		flag=1;
		cout<<"Found! At "<<i<<endl;
		break;
		}
		}
		if(flag==0)
		{
		cout<<"Not Found!"<<endl;
		}
		*/
	return 0;

}
