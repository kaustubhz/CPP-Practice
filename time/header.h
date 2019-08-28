#include<iostream>
#include<math.h>
using namespace std;

class Time
{
	private:
		int hrs,min,sec;
	public:
		Time();
		Time(int h,int m,int s);
		~Time();
		void Display();
		void Compare(Time);
		void Diff(Time);
		
};
