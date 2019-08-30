#include"PaySlip.h"

PaySlip::PaySlip():empNo("10"),empName("abc"),basic(100),hra(120),da(110)
{

}

void PaySlip::Accept()
{
	cout<<"\nEnter Employee Number: ";
	cin>>empNo;
	cout<<"\nEnter Employee name: ";
	cin>>empName;
	cout<<"\nEnter Basic Salary: ";
	cin>>basic;
}

void PaySlip::Display()
{
	cout<<"\nEmployee Details"<<endl;
	cout<<"\nEmployee Number: "<<empNo;
	cout<<"\nEmployee Name: "<<empName;
	cout<<"\nTotal Salary: "<<CalcSalary();
	cout<<"\nBasic : "<<basic;
	cout<<"\nDA: "<<da;
	cout<<"\nHRA: "<<hra;

}

int PaySlip:: CalcSalary()
{
	da=(int)basic+(basic*0.10f);
	hra=(int)basic+(basic*0.20f);
	return (basic+da+hra);
}

PaySlip::~PaySlip()
{
cout<<"\nDTOR called";
}
