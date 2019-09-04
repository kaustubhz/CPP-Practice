#include"Player.h"

int main(int argc,char *argv[])
{
	int number;
	cout<<"\nEnter number of players: ";
	cin>>number;
	Player p[number];
	for(int i=0;i<number;i++)
	{
		p[i].Accept();
	}
	/*for(int i=0;i<number;i++)
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
	  }*/
	if(argc<3)
	{
		Player::WriteToFile(p,number);
		Player::ReadFromFile();
	}
	else
	{
		Player::WriteToFile(p,number,argv[1]);
		Player::CopyFile(argv[1],argv[2]);
	}
	return 0;
}
