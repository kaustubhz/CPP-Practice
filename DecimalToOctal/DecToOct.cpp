#include"DecToOct.h"

Stack::Stack()
{
	tos=-1;
	p=new int[SIZE];
}

bool Stack:: isFull()
{
	return SIZE-1==tos;
}

bool Stack:: isEmpty()
{
	return tos==-1;
}

int Stack:: peep()
{
	if(isEmpty())
		throw runtime_error("Stack Underflow");
	return p[tos];
}
int Stack:: pop()
{
	if(isEmpty())
		throw runtime_error("Stack Underflow");
	int ele= p[tos];
	tos--;
	return ele;
}
void Stack:: push(int ele)
{
	if(isFull())
		throw runtime_error("Stack Overflow");
	tos++;
	p[tos]=ele;
}
void Stack:: Accept()
{
	cout<<"\nEnter number you want to convert in Octal: ";
	cin>>num;
//	cout<<"Number: "<<num;
}

void Stack:: DecToOct()
{
//	cout<<"\nInside func";
	if(num==0)
		push(0);
	while(num!=0)
	{
		//cout<<"\nInside loop1";
		push(num%8);
		num=num/8;
	}
}

void Stack:: Display()
{
	cout<<"\nOctal equivalent is "<<endl;
	while(!isEmpty())
	{
		cout<<pop();
	}
}


Stack::~Stack()
{
	delete []p;
}

