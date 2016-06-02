#include <cstdlib>
#include <iostream>

using namespace std;

class Pyramid
{
private:
	int money = 0;
	int numberOfFools = 0;
	int numberOfFoolsYesterday = 0;
	int income = 0;
	int amountIn = 0;
	int amountOut = 0;
	int year = 0;
	int range = 1;
public:
	void report()
	{
		cout << "Stan na rok " << year << "." << endl
			 << "   Liczba pieniedzy w skarbcu: " << money << endl
			 << "   Liczba osob naciagnietych: " << numberOfFools << endl
			 << "   Wzrost liczby naciagnietych: " << numberOfFools - numberOfFoolsYesterday << endl
			 << "   Suma wplywow: " << amountIn * (numberOfFools - numberOfFoolsYesterday) << endl
			 << "   Suma wyplat: " << amountOut*(numberOfFoolsYesterday) << endl
			 << "   Zarobek: " << income << endl
			 << "   Procentowy wzrost naciagnietych " << 100.0*(numberOfFools)/(numberOfFoolsYesterday)-100.0 << "%\n"
			 << "   Probowalismy naciagnac do tej pory " << range << " osob." << endl << endl;
	}

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

	void calculateIncome()
	{
		income = amountIn * (numberOfFools - numberOfFoolsYesterday) - amountOut*(numberOfFoolsYesterday);
	}
};