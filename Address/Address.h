#include<iostream>
#include<string>
using namespace std;

class Address
{
	private :
		string HouseNo;
		string Colony;
		string Area;
		string City;
		string Pincode;
	public:
		Address();
		~Address();
		void Accept();
		void Display();
		void CompAdd(Address&);
		bool operator ==(const Address& ) const;
};

