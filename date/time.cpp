#include"time.h"
#include<math.h>

MyTime::MyTime(int d=1,int m=1,int y=2000): dd(d),mm(m),yyyy(y)
{
}
MyTime::~MyTime()
{
	cout<<"\nDTOR called"<<endl;
}
int MyTime::compare(MyTime t1)
{
	if(dd==t1.dd && mm==t1.mm && yyyy==t1.yyyy)
	{
		cout<<"\nBoth dates are same."<<endl;
		return 0;
	}
	else 
	{
		if(yyyy==t1.yyyy && mm==t1.mm)
		{
			if(dd<t1.dd)
			{
				cout<<"\nDate1 is earlier"<<endl;
				return 0;
			}
			else
			{
				cout<<"\nDate2 is earlier"<<endl;
				return 0;
			}
		}	
		else if(yyyy==t1.yyyy)
		{
			if(mm<t1.mm)
			{
				cout<<"\nDate1 is earlier"<<endl;
				return 0;
			}
			else
			{
				cout<<"\nDate2 is earlier"<<endl;
				return 0;
			}
		}
		else if(yyyy<t1.yyyy)
		{
			cout<<"\nDate1 is earlier"<<endl;
			return 0;
		}
		else
		{
			cout<<"\nDate2 is earlier"<<endl;
			return 0;
		}


	}
}

int MyTime::differ(MyTime t1)
{
	int totalDays=0;
	totalDays=totalDays+abs(2000-t1.yyyy)*365;
	totalDays=totalDays+ConvertToDays(t1.mm);
	totalDays=totalDays+t1.dd;

	int totalDays1=0;
	totalDays1=totalDays1+abs(2000-yyyy)*365;
	totalDays1=totalDays1+ConvertToDays(t1.mm);
	totalDays1=totalDays1+t1.dd;

	return abs(totalDays-totalDays1);
}

int MyTime::Daysinmonth(int nn)
{
	if(nn==2)
		return 28;
	if(nn<=7 && (nn%2)!=0)
		return 31;
	else if(nn>7 && (nn%2)==0)
		return 31;
	else
		return 30;
}

int MyTime::ConvertToDays(int m)
{
	int total=0;
	for(int i=1;i<m;i++)
	{
		total=total+Daysinmonth(m);
	}
	return total;
}


