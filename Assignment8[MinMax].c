#include<stdio.h>
int acceptArray(int [],int);
int displayArray(int [],int);
int minimum(int [],int);
int maximum(int [],int);

int acceptArray(int arr[],int number)
{
	int i;
	for(i=0;i<number;i++)
	{
		printf("\nEnter number %d: ",i+1);
		scanf("%d",&arr[i]);
	}
}

int displayArray(int arr[],int number)
{
	int i;
	printf("\nNumbers you\'ve inserted are: [");
	for(i=0;i<number;i++)
	{
		printf(" %d ",arr[i]);
	}
	printf("]");
}
int minimum(int arr[],int number)
{
	int i,min1,min2;
	min1=min2=32767;
	//Maximum integer value for int is 32767
	for(i=0;i<number;i++)
	{
		if(arr[i]<min1)
		{
			min2=min1;
			min1=arr[i];
		}
		else if(arr[i]<min2 && arr[i]>min1)
		{
			min2=arr[i];
		}
	}
	printf("\n Min is [%d] and second min is [%d]",min1,min2);
	return 0;
}

int maximum(int arr[],int number)
{
	int i,max1,max2;
	max1=max2=-32768;
	//Minimum integer value for int is -32768
	for(i=0;i<number;i++)
	{
		if(arr[i]>max1)
		{
			max2=max1;
			max1=arr[i];
		}
		else if(arr[i]>max2 && arr[i]<max1)
		{
			max2=arr[i];
		}
	}
	printf("\n Max is [%d] and second max is [%d]",max1,max2);
	return 0;
}

int main()
{
	int number;
	printf("\nEnter number to be accepted: ");
	scanf("%d",&number);
	int array[number];
	acceptArray(array,number);	
	displayArray(array,number);
	minimum(array,number);
	maximum(array,number);
	return 0;
}
