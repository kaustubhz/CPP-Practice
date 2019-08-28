#include<iostream>
#include<string>
using namespace std;

class Student
{
	private:
		int roll;
		string course;
		string name;
	public:
		Student();
		Student(int,string,string);
		~Student();
		int GetRoll() const;
		void Accept();
		void Display() const;
		static int Search(Student*,int,int);

};
