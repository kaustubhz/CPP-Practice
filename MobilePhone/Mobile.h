#include<iostream>
#include<string>
using namespace std;

class MobilePhone
{
	private:
		string modelNo;
		string price;
		int quantity;
		string manufacturer;
	public:
		MobilePhone();
		MobilePhone(string,string,int,string);
		~MobilePhone();
		void Accept();
		static void DisplayAllModels(MobilePhone* ,int);
		static int SearchModel(MobilePhone* ,int, string);
};
