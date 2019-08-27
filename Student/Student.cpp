#include "Student.h"

Student::Student()
{
	Roll = 0;
	Name = "xyz";
	Per = 0.00;
}
void Student::Accept()
{
	cout<<"\nEnter Roll Number: ";
	cin>>Roll;
	cout<<"\nEnter Student\'s name: ";
	cin>>Name;
	cout<<"\nEnter Student's percentage: ";
	cin>>Per;
}

void Student::Display()
{
	cout<<"\nStudent's Details";
	cout<<"\nRoll Number\tName\tPercentage"<<endl;
	cout<<Roll<<"\t"<<Name<<"\t"<<Per<<endl;
}
