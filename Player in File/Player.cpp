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
				p[i].age=p[j].age;
				p[j].age=temp.age;			
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
				temp.name.assign(p[i].name);
				p[i].name.assign(p[j].name);
				p[j].name.assign(temp.name);
			}
		}
	}
}

void Player::WriteToFile(Player *p,int size)
{
	ofstream fout("Player.txt");
	for(int i=0;i<size;i++)
	{
		fout<<p[i].name<<"\t"<<p[i].age<<"\t"<<p[i].country<<endl;
	}
}

void Player::ReadFromFile()
{
	string str;
	ifstream fin("Player.txt");
	if(!fin)
	{
		cout<<"Unable to open a file";
	}
	else
	{
//		cout<<"Inside a file";
		while(!fin.eof())
		{
			getline(fin,str);
			cout<<str<<endl;
		}
	}
}

void Player::CopyFile(char* file1,char* file2)
{
		ifstream fin(file1);
                ofstream fout(file2);
                if(!fin)
                {
                        cout<<"Unable to open a file";
                }
                else
                {
			string str;
			while(!fin.eof())
			{
				getline(fin,str);
				fout<<str<<endl;
			}
                }

}

Player::~Player()
{
	cout<<endl<<"DTOR called"<<endl;
}
