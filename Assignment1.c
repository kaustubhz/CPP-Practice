#include<stdio.h>
#include<ctype.h>
int checkforvalidnumber(int);
int printsumusingloop(int);
int printsumusingrecursion(int,int);
int main(){
	int number,resloop,resrecur;
	//Number for accepting input
	//resloop for displaying calculated result using for loop
	//resrecur for displaying calculated result using recursion
	printf("\nEnter a 4 digit number: ");
	scanf("%d",&number);
	if(checkforvalidnumber(number)==0)
	{
		printf("\nPlease enter 4 digit number\n");
	}
	else
	{
	resloop=printsumusingloop(number);
	resrecur=printsumusingrecursion(number,0);
	printf("\nUsing loop, Sum of the digits of [%d] is [%d]\n",number,resloop);
	printf("\nUsing recursion, Sum of the digits of [%d] is [%d]",number,resrecur);
	}
	return 0;
}

int checkforvalidnumber(int number)
{
	int count=0;
	//To count total digits in a give number, with initial value of 0
	while(number!=0)
	{		
		number/=10;
		count++;
	}
	if(count!=4)
		return 0;
	else
		return 1;
}

int printsumusingloop(int number)
{
	int temp,sum=0;
	//temp for temporary variable
	//sum to calculate sum with initial value of 0
	while(number!=0)
	{
		temp=number%10;
		sum+=temp;
		number/=10;
	}
	return sum;
}

int printsumusingrecursion(int number,int sum)
{
	if(number==0)
		return sum;
	else
	{
		sum+=number%10;
		return printsumusingrecursion(number/=10,sum);
	}

}
