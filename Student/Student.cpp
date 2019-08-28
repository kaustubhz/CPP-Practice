#include"Student.h"

//Default constructor
Student::Student():roll(0),name(""),course("")
{

}

//Parameterized Constructor
Student::Student(int r,string n,string c)
{
	roll=r;
	name=n;
	course=c;
}

//Accept Data
void Student::Accept()
{
//	int a,b;
	cout<<"\nEnter Roll: ";
	cin>>roll;
	cout<<"\nEnter name: ";
	cin>>name;
//	getline(cin,name);
//	cin>>a;
	cout<<"\nEnter course: ";
	//cin>>course;
	cin>>course;
//	getline(cin,course);
//	cin>>b;
}

//Display data
void Student::Display() const
{
	cout<<"\nRoll Number: "<<roll<<"\nName: "<<name<<"\nCourse: "<<course;
}

//Getters for Rollno
int Student:: GetRoll() const
{
	return roll;
}

int Student::Search(Student *s,int size,int rollno)
{
	for(int i=0;i<size;i++)
	{
		if(s[i].GetRoll()==rollno)
		{
			cout<<"\nStudent present";
			return 0;
		}
	}	
	cout<<"No student found!";
	return 1;
}
Student::~Student()
{
	cout<<"\nDestructor called"<<endl;
}
