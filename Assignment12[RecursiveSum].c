#include<stdio.h>
int recursivesum(int,int);
int main()
{
	int number,result;
	printf("\nEnter n numbers of which you\'ve to find sum: ");
	scanf("%d",&number);
	result=recursivesum(number,0);
	printf("\nFinal sum is: [ %d ]",result);
}

int recursivesum(int number,int sum)
{
	if(number==0)
		return sum;
	else
	{
		int x;
		printf("\nEnter a number: ");
		scanf("%d",&x);
		printf("\nNow sum is: [%d]",sum+=x);
		recursivesum(--number,sum);
	}
}
