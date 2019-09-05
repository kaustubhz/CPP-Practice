#include"time.h"

int main()
{
	MyTime d1(30,11,2001),d2(30,1,2001);
	d1.compare(d2);
	cout<<"\nDifference is : "<<d1.differ(d2)<<endl;

	return 0;
}
