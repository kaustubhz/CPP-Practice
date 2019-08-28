#include"Student.h"

int main()
{
	int number,rollno;
	cout<<"\nHow many student records: ";
	cin>>number;
	Student s[number];
	for(int i=0;i<number;i++)
	{
		s[i].Accept();
	}
	for(int i=0;i<number;i++)
	{
		s[i].Display();
	}
	cout<<"\nEnter roll you want to be searched: ";
	cin>>rollno;
	Student::Search(s,number,rollno);
	return 0;
}
