#include"MenuStack.h"
int main()
{
	int ch,number;
	Stack s;
	do
	{
		cout<<"\n\n1.Push\n2.Pop\n3.Peek\n4.Check full\n5.Check empty\n6.Exit\n\nEnter your choice: ";
		cin>>ch;
		try
		{
			switch(ch)
			{
				case 1: cout<<"\nEnter a number: ";
					cin>>number;
					s.Push(number);
					break;

				case 2: cout<<"\nPopped: "<<s.Pop();
					break;

				case 3: cout<<"\nAt stack\'s top: "<<s.Peep();
					break;

				case 4: cout<<(s.isFull()?"\nStack is full":"\nStack is not full");
					break;

				case 5: cout<<(s.isEmpty()?"\nStack is empty":"\nStack is not empty");
					break;

				case 6:cout<<"\nExiting!!!";
				       break;

				default: cout<<"\nPlease enter a valid choice";
			}
		}
		catch(runtime_error re)
		{
			cout<<"\n"<<re.what();
			exit(0);
		}		
	}while(ch!=6);

	return 0;
}

