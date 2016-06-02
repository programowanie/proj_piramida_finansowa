#include <iostream>
#include <string>

using namespace std;

class Citizen
{
private:
	const int education = 0;
	string name = " ";
	int money = 0;
	int age = 1;
	int faith = 0;
	bool participation = false;
	bool alive = true;
public:
	void calculateFaith()
	{
		faith = 10500 - money + rand()%5000;
	}

	void modifyAge(int newAge)
	{
		age = newAge;
	}

	void modifyParticipation(int a)
	{
		participation = a%2;
	}

	void modifyName(string str)
	{
		name = str;
	}

	void modifyMoney(int amount)
	{
		money = money + amount;
	}

	int showFaith()
	{
		return faith;
	}

	int showAge()
	{
		return age;
	}
		
	string showName()
	{	
		return name;
	}
	
	int showMoney()
	{
		return money;
	}	

	bool checkParticipation()
	{
		return participation;
	}
	
	bool checkLiving()
	{
		if (age > 30)  {alive = false; return false;};
	}
	
};

