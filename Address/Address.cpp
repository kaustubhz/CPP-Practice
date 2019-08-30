#include"Address.h"

Address::Address():HouseNo("abc"),Colony("pqr"),Area("xyz"),City("ghi"),Pincode("kkk")
{
}
void Address::Accept()
{
	cout<<"\nEnter House number : ";
	cin>>HouseNo;
	cout<<"\nEnter Colony : ";
	cin>>Colony;
	cout<<"\nEnter Area : ";
	cin>>Area;
	cout<<"\nEnter city : ";
	cin>>City;
	cout<<"\nEnter Pincode : ";
	cin>>Pincode;
}

void Address::Display()
{
	cout<<"\nAddress is :\n"<<HouseNo<<"\n"<<Colony<<"\n"<<Area<<"\n"<<City<<"\n"<<Pincode<<endl;
}

void Address::CompAdd(Address& a)
{
	if(HouseNo.compare(a.HouseNo)==0 && Colony.compare(a.Colony)==0 && Area.compare(a.Area)==0  && City.compare(a.City)==0 && Pincode.compare(a.Pincode)==0)
	{
		cout<<"\nBoth Addresses are same"<<endl;
	}
	else
		cout<<"\nAddress are not same"<<endl;
}

bool Address::operator ==(const Address& a) const
{
	return(HouseNo.compare(a.HouseNo)==0 && Colony.compare(a.Colony)==0 && Area.compare(a.Area)==0  && City.compare(a.City)==0 && Pincode.compare(a.Pincode)==0);
}

Address::~Address()
{
	cout<<"\nDTOR"<<endl;
}


