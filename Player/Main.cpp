#include"Player.h"

int main()
{
	int number;
	cout<<"\nEnter number of players: ";
	cin>>number;
	Player p[number];
	for(int i=0;i<number;i++)
	{
		p[i].Accept();
	}
	for(int i=0;i<number;i++)
	{
		p[i].Display();
	}
	Player::SortByAge(p,number);
	cout<<"\nPlayer list (By age)"<<endl;
	for(int i=0;i<number;i++)
	{
		p[i].Display();
	}

	
	Player::SortByName(p,number);
	cout<<"\nPlayers sorted by name :"<<endl;
	for(int i=0;i<number;i++)
	{
		p[i].Display();
	}
	
return 0;
}
