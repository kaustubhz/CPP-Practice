#include<stdio.h>
int factorial(int);
int main()
{
	printf("\nFactorial series is: \n[");
	int i;
	for (int i=0;i<=20;i++)
	{
		printf(" %d ",factorial(i));
	}
	printf("]");
return 0;
}

int factorial(int number)
{
	if(number==0 || number==1)
		return 1;
	else
	{
		return number*factorial(number-1);	
	}
}
