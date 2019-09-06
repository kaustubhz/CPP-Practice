#include"MenuStack.h"

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

int Stack:: Peep()
{
	if(isEmpty())
		throw runtime_error("Stack Underflow");
	return p[tos];
}
int Stack:: Pop()
{
	if(isEmpty())
		throw runtime_error("Stack Underflow");
	int ele= p[tos];
	tos--;
	return ele;
}
void Stack:: Push(int ele)
{
	if(isFull())
		throw runtime_error("Stack Overflow");
	tos++;
	p[tos]=ele;
}

Stack::~Stack()
{
	delete []p;
}

