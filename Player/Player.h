#include<iostream>
#include<cstring>
using namespace std;

class Player
{
	private:
	string name;
	int age;
	string country;

	public:
	Player();
	~Player();
	void Accept();
	void Display() const;
	static void SortByAge(Player*,int);
	static void SortByName(Player*,int);

};
