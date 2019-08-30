#include<iostream>
using namespace std;

class PaySlip
{
	private:
		string empNo;
		string empName;
		int basic;
		int hra;
		int da;

	public:
		PaySlip();
		~PaySlip();
		void Accept();
		void Display();
		int CalcSalary();
};
