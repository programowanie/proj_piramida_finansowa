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
	int day = 0;

public:
	void report()
	{
		cout << "Stan na dzien " << day << "." << endl
			 << "   Liczba pieniedzy w skarbcu: " << money << endl
			 << "   Liczba osob naciagnietych: " << numberOfFools << endl
			 << "   Wzrost liczby naciagnietych: " << numberOfFools - numberOfFoolsYesterday << endl
			 << "   Suma wplywow: " << amountIn * (numberOfFools - numberOfFoolsYesterday) << endl
			 << "   Suma wyplat: " << amountOut*(numberOfFoolsYesterday) << endl
			 << "   Zarobek: " << income << endl
//			 << "   Procenty" << 100.0*(numberOfFools)/(numberOfFoolsYesterday)-100.0 << "%\n"
			 << "########################################################" << endl << endl;
	}

	void nextDay()
	{
		day++;
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