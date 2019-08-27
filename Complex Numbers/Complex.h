#include<iostream>
using namespace std;
class Complex
{
	private:
		int real;
		int img;
	public:
		Complex();
		Complex(int,int);
		void Accept();
		void Display() const;	
//		int search(int);
		int GetReal() const;
		static int search(Complex*,int,int);
};
