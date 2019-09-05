#include<stdio.h>
int acceptArray(int [],int);
int displayArray(int [],int);
float average(int [],int);

int acceptArray(int arr[],int number)
{
	int i;
	for(i=0;i<number;i++)
	{
		printf("\nEnter numeber %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	return 0;
}

int displayArray(int arr[],int number)
{
	int i;
	printf("\nNumbers you\'ve inserted are\n[ ");
	for(i=0;i<number;i++)
	{
		printf(" %d ",arr[i]);
	}
	printf(" ]");
	return 0;
}

float average(int arr[],int number)
{
	int i,sum=0;
	for(i=0;i<number;i++)
	{
		sum+=arr[i];
	}
	return sum/number;
}

int main()
{
	int number;
	printf("\nEnter number of elements to be accepted: ");
	scanf("%d",&number);
	int array[number];
	acceptArray(array,number);
	displayArray(array,number);
	printf("\nThe average is: %.4f",average(array,number));
	return 0;
}
