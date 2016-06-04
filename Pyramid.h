#pragma once
#include <cstdlib>
#include <iostream>

using namespace std;

class Pyramid// "Piramida finansowa"
{
private:
	int money = 0;
	int numberOfFools = 0;// "Brak skrupułów"
	int numberOfFoolsYesterday = 0;
	int income = 0;
	int amountIn = 0;
	int amountOut = 0;
	int year = 0;
	int range = 1;
public:
	void report();

	void nextYear()
	{
		year++;
	}

	int showMoney()
	{
		return money;
	}

	int showRange()
	{
		return range;
	}

	int showFools()
	{
		return numberOfFools;
	}

	int showIncome()
	{
		return income;
	}
	
	void modifyAmountIn(int amount)
	{
		amountIn = amount;
	}
	
	void modifyAmountOut(int amount)
	{
		amountOut = amount;
	}

	void modifyRange(int newRange)
	{
		range = newRange;
	}

	void modifyFools(int number)
	{
		numberOfFoolsYesterday = numberOfFools;
		numberOfFools = number;
	}

	void modifyMoney(int amount)
	{
		money = money + amount;
	}

	void calculateIncome();
};