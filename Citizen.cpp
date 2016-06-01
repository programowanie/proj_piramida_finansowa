#include <iostream>
#include <string>

using namespace std;

class Citizen
{
private:
	string name = " ";
	int money = 0;
	int age = 1;
	int faith = 0;
	bool participation = false;

public:
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
	
	
};


