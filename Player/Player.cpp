#include"Player.h"

Player::Player():name(""),age(0),country("")
{

}

void Player::Accept()
{
	cout<<"\nEnter name: ";
	cin>>name;
	cout<<"\nEnter age: ";
	cin>>age;
	cout<<"\nEnter country: ";
	cin>>country;
}

void Player::Display() const
{
	cout<<"\nName: "<<name;
	cout<<"\nAge: "<<age;
	cout<<"\nCountry: "<<country;
}

void Player::SortByAge(Player* p,int size)
{
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(p[i].age>p[j].age)
			{
				Player temp;
				
				temp.age=p[i].age;
				temp.name.assign(p[i].name);
				temp.country.assign(p[i].country);

				p[i].age=p[j].age;
				p[i].name.assign(p[j].name);
				p[i].country.assign(p[j].country);

				p[j].age=temp.age;
				p[j].name.assign(temp.name);
				p[j].country.assign(temp.country);
			}
		}
	}
}

/*void Player::SortByName(Player* p,int size)
{
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(strcmp(p[i].name,p[j].name)<0)
			{
				Player temp;
				temp.name=p[i].name;
				p[i].name=p[j].name;
				p[j].name=temp.name;			
			}
		}
	}
}
*/

void Player::SortByName(Player* p,int size)
{
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if((p[i].name.compare(p[j].name))>0)
			{
				Player temp;
				
				temp.age=p[i].age;
				temp.name.assign(p[i].name);
				temp.country.assign(p[i].country);

				p[i].age=p[j].age;
				p[i].name.assign(p[j].name);
				p[i].country.assign(p[j].country);

				p[j].age=temp.age;
				p[j].name.assign(temp.name);
				p[j].country.assign(temp.country);
			}
		}
	}
}
Player::~Player()
{
	cout<<endl<<"DTOR called"<<endl;
}
