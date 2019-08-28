#include"header.h"

int main()
{
//	int a,b,c,a1,b1,c1;

	Time t1(1,30,15),t2(2,10,45);
	t1.Compare(t2);
	t1.Diff(t2);

	return 0;
}
