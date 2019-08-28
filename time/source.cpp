#include"header.h"

Time::Time()
{
	cout<<"\nDefault CTOr called"<<endl;
}
Time::Time(int h,int m,int s):hrs(h),min(m),sec(s)
{
}
void Time::Display()
{
	cout<<"\nTime is "<<hrs<<"hrs "<<min<<"min "<<sec<<"sec "<<endl;
}
void Time::Compare(Time t)
{
	if(this->hrs==t.hrs and this->min==t.min and this->sec==t.sec)
		cout<<"\nTime Same"<<endl;
	else
		cout<<"\nTime is not same"<<endl;
}
void Time::Diff(Time t)
{
	cout<<"Hrs "<<fabs(this->hrs-t.hrs)<<" Mins "<<fabs(this->min-t.min)<<" Secs "<<fabs(this->sec-t.sec);	
}

Time::~Time()
{
	cout<<"\nDTOR Called"<<endl;
}
