#include"Mobile.h"

MobilePhone::MobilePhone():modelNo(""),price("10"),quantity(0),manufacturer("")
{
	cout<<"\nSome mobile inserted";
}

MobilePhone::MobilePhone(string m,string p,int q,string mf):modelNo(m),price(p),quantity(q),manufacturer(mf)
{
	cout<<"\nSpecific mobile inserted";
}

void MobilePhone::Accept()
{
	cout<<"\nEnter Model No: ";
	cin>>modelNo;
	cout<<"\nEnter Price: ";
	cin>>price;
	cout<<"\nEnter quantity: ";
	cin>>quantity;
	cout<<"\nEnter Manufacturer: ";
	cin>>manufacturer;
}


int MobilePhone::SearchModel(MobilePhone *mp,int size,string mod)
{
	for(int i=0;i<size;i++)
	{
		if(mp[i].modelNo==mod)
		{
	//		cout<<"\nModel No: "<<mp[i].quantity;
			return mp[i].quantity;
		}

	}
//	cout<<"\nNo such Model"<<endl;
	return -1;
}

void MobilePhone::DisplayAllModels(MobilePhone *mp,int size)
{
	for(int i=0;i<size;i++)
	{	
	cout<<"\nModel Number: "<<mp[i].modelNo;
	cout<<"\nPrice: "<<mp[i].price;
	cout<<"\nManufacturer: "<<mp[i].manufacturer;
	cout<<"\nAvailable pieces: "<<mp[i].quantity;
	}
}

MobilePhone::~MobilePhone()
{
	cout<<"\nMobile Phone expired";
}
