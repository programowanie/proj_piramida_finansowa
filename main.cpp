//This code contains poem by unknown but talented Polish writer. Please read it carefully before assessment.
#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <string>
#include <ctime>
#include <unistd.h>
#include "Pyramid.cpp"
#include "Citizen.cpp"

using namespace std;

void loss()
{
	cout << endl << endl << "$$$$$$$$$$$$$$$$$$$$$$$$$$$"
	       << endl << "Te dolary powyzej nie sa dla Ciebie, bo spoleczenstwo okazalo sie za madre na Twoja piramide finansowa." << endl;
}

void ad(int degree, int amountOut, int amountIn, int population)
{
	cout << "########### UWAGA! REKALAMA! ################" << endl
	       << "Masz dosc pracy od 7 do 23?" << endl
	       << "Meczy Cie rutyna dnia codziennego?" << endl
	       << "Chcesz zarobic, by wkurzyc sasiada?" << endl
	       << "A moze wszystkich " << population << " sasiadow?" << endl << endl
	       << "Oferta firmy R.Obbery Corp. jest wlasnie dla Ciebie!" << endl
	       << "Za jedyne " << amountIn << "$ wplaty wlasnej zapewnimy Ci staly dochod roczny w wysokosci " << amountOut << "$!" << endl
	       << "Bez ryzyka, bez formalnosci, po cichu, by Urzad Skarbowy sie nie dowiedzial!" << endl
	       << "Z oferty moga korzystac osoby w wieku od 5 do 30 lat" << endl
	       << "Zadzwon juz dzis - 544 342 678!" << endl << endl << endl;
	usleep(15000000);
}

int main(int argc, char** argv)
{
	system("clear");
	srand(time(NULL));
	int newFools = 0, presentIterator = 1;
	int degree = 4;
	int amountIn = 1000;
	int amountOut = 50;
	int startingMoney = 500;
	unsigned long long int population = 50000;
	population = atoi(argv[1]); degree = atoi(argv[2]); amountIn = atoi(argv[3]); amountOut = atoi(argv[4]); startingMoney = atoi(argv[5]);

	Citizen Villagers[population];
	Pyramid R_ObberyCorp;
//------------------------------------------------------------------------------------------------
	ad(degree, amountOut, amountIn, population);
//-------------------------------------------------------------------------------------------------
	R_ObberyCorp.modifyAmountIn(amountIn);
	R_ObberyCorp.modifyAmountOut(amountOut);

//pierwszy dzień
	for (int i = 0; i < population; i++)
	{
		Villagers[i].modifyAge(rand()%30+1);
		Villagers[i].modifyMoney(rand()%10000+startingMoney);
		Villagers[i].calculateFaith();
	}

	R_ObberyCorp.modifyFools(1);



//kolejne dni
	bool OK = true;
	while(OK)
	{
		newFools = 0;
		R_ObberyCorp.calculateIncome();
		R_ObberyCorp.modifyMoney(R_ObberyCorp.showIncome());
		R_ObberyCorp.report();
		


		for (presentIterator = 0; presentIterator < population && presentIterator < R_ObberyCorp.showRange(); presentIterator++)
		{
			if (!(Villagers[presentIterator].checkParticipation()) && Villagers[presentIterator].showAge()>5 && Villagers[presentIterator].checkLiving())
				if (Villagers[presentIterator].showFaith() > 3000)
				{
					Villagers[presentIterator].modifyParticipation(1);
					newFools++;
				}
		}


		R_ObberyCorp.nextYear();
		R_ObberyCorp.modifyFools(R_ObberyCorp.showFools() + newFools);
		for (int i = 0; i < population; i++)
		{
			if (Villagers[i].checkLiving())
			{
				if (Villagers[i].checkParticipation()) Villagers[i].modifyMoney(amountOut);
				Villagers[i].modifyMoney(500);
				Villagers[i].calculateFaith();
				Villagers[i].modifyAge(Villagers[i].showAge()+1);
				Villagers[i].checkLiving();
			}
		}
		if (R_ObberyCorp.showMoney() < 0) {loss(); OK = false;} 
		if (R_ObberyCorp.showRange() == population) OK = false;

				if (R_ObberyCorp.showRange()*degree > population)
			R_ObberyCorp.modifyRange(population);
		else
			R_ObberyCorp.modifyRange(R_ObberyCorp.showRange()*degree);
		
	}


	return 0;
}