#include"Mobile.h"

int main()
{
	int number,choice,quantity;
	char ch;
	string model;
	cout<<"Enter number of models: ";
	cin>>number;
	MobilePhone *m=new MobilePhone[number];
	//MobilePhone::SearchModel(m,number,"A");
	do
	{
		cout<<"\nWelcome to our Mobile forum"<<endl;
		cout<<"1. Add a mobile"<<endl;
		cout<<"2. Display all available mobile models"<<endl;
		cout<<"3. Quantity of mobile model"<<endl;
		cout<<"4. Availability of model"<<endl;
		cout<<"Enter your choice: ";
		cin>>choice;
		switch(choice)
		{
			case 1: 
				for(int i=0;i<number;i++)
				{
					m[i].Accept();
				}		
				break;
			case 2:
				MobilePhone::DisplayAllModels(m,number);
				break;
			case 3:	cout<<"\nEnter mobile model: ";
				cin>>model;
				quantity=MobilePhone::SearchModel(m,number,model);

				if(quantity==-1)
					cout<<"\nNo model found";
				else
					cout<<"\nModel found with quantity: "<<quantity;
				break;
			case 4: cout<<"\nEnter mobile model: ";
				cin>>model;
				quantity=MobilePhone::SearchModel(m,number,model);

				if(quantity==-1)
					cout<<"\nNo model found";
				else if(quantity==0)
					cout<<"\nModel is unavailable ";
				else
					cout<<"\nModel is available";
				break;
			default:cout<<"\nPlease enter valid choice";
				break;
		}
		cout<<"\nDo you want to continue: (y/n) ";
		cin>>ch;
		cin.get();//Eater for Enter key
	}while(ch!='n');
	cout<<"\nGood bye!!!";
	delete [] m;
	return 0;
}
