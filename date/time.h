#include<iostream>
using namespace std;
class MyTime
{
	private:
		int dd;
		int mm;
		int yyyy;
	public:
//		MyTime();
		MyTime(int,int,int);
		int compare(MyTime);
		int differ(MyTime);
		static int Daysinmonth(int);
		static int ConvertToDays(int);
		~MyTime();
		MyTime operator !=(MyTime);
		MyTime operator ==(MyTime);
		MyTime operator =(MyTime);
};
