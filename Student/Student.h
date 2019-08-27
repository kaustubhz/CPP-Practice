#include<iostream>
#include<string>
using namespace std;

class Student
{
	private:
		int Roll;
		string Name;
		float Per;
	public:
		Student();
		void Accept();
		void Display();
};
