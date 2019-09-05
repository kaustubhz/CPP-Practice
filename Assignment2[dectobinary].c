#include<stdio.h>
int convertdectobin(int);
int main()
{
	int number;//Declaring variable to hold a decimal value
	printf("\nEnter a number which is to be converted to binary: ");
	scanf("%d",&number);
	printf("Decimal to binary conversion of [%d] is [ %d ]",number,convertdectobin(number));
	/*int result=convertdectobin(number);
	  printf("%d ]\n",result);*/
}

int convertdectobin(int number)
{
	//	int temp;
	if(number==0)
	{
		//printf(" %d ",temp);
		return 0;
	}
	else
	{		
		return number%2+10*convertdectobin(number/=2);
	}
}
