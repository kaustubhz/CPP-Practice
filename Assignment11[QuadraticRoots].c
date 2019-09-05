#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d;
	double root1,root2;
	printf("\n [a*x^2+b*x+c]");
	printf("\n a= ");
	scanf("%d",&a);
	printf("\n b= ");
	scanf("%d",&b);
	printf("\n c= ");
	scanf("%d",&c);

	d=(int)pow(b,2)-(4*a*c);
	//d stands for discriminant
	printf("\nDiscriminant [d] is %d\n",d);

	if(d<0)//complex root
	{
		printf("First root = %.2lf + %.2lf*j\n", -b/(double)(2*a), sqrt(-d)/(2*a));
		printf("Second root = %.2lf - %.2lf*j\n", -b/(double)(2*a), sqrt(-d)/(2*a));
	}
	else { //real roots
		root1 = (-b + sqrt(d))/(2*a);
		root2 = (-b - sqrt(d))/(2*a);

		printf("First root = %.2lf\n", root1);
		printf("Second root = %.2lf\n", root2);
	}
}
