#include"Complex.h"

Complex::Complex():real(0),img(0){};

Complex::Complex(int a,int b)
{
	real = a;
	img = b;
}

void Complex::Accept()
{
	cout<<"Enter Real = ";
	cin>>real;
	cout<<"\nEnter Img = "<<endl;
	cin>>img;
}

int Complex::GetReal() const
{
	return real;
}

void Complex::Display() const
{
	cout<<"real = "<<real<<"\timg = "<<img<<endl;
}

/*int Complex::search(int number)
{
	if(number==real)
		{
			return 1;
		}
	else{
		return 0;
	}

}*/

int Complex::search(Complex *c,int size,int number)
{
	for(int i=0;i<size;i++)
	{
		if(c[i].GetReal()==number)
		{
			cout<<"Found!";
			return 0;
		}

	}
	cout<<"Not found!";
	return 1;
}
