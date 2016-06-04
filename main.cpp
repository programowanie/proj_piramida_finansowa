//This code contains a poem written by an unknown but talented Polish writer. Please read it carefully before assessment.
#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <string>
#include <ctime>
#include <unistd.h>
#include "Pyramid.h"
#include "Citizen.h"
#include "events.h"

using namespace std;

int main(int argc, char** argv)// "Piramida szał natura"
{
	system("clear"); 
	srand(time(NULL));
	int newFools = 0, presentIterator = 1;// "Małomiejskie problemy"
	int degree = 4;
	int amountIn = 1000;
	int amountOut = 50;
	int startingMoney = 500;// "Pragnienie zarobku"
	int naiveBound = 3000;
	unsigned long long int population = 50000;// "n-1 sąsiadów"
	population = atoi(argv[1]); degree = atoi(argv[2]); amountIn = atoi(argv[3]); amountOut = atoi(argv[4]); startingMoney = atoi(argv[5]); naiveBound = atoi(argv[6]);

	Citizen Villagers[population];// "Chłopski los"
	Pyramid R_ObberyCorp;
//------------------------------------------------------------------------------------------------
	ad(degree, amountOut, amountIn, population);// "Posłuszeństwo"
//------------------------------------------------------------------------------------------------
	R_ObberyCorp.modifyAmountIn(amountIn);
	R_ObberyCorp.modifyAmountOut(amountOut);

//FIRST DAY
	for (int i = 0; i < population; i++)
	{
		Villagers[i].modifyAge(rand()%30+1);
		Villagers[i].modifyMoney(rand()%10000+startingMoney);
		Villagers[i].calculateFaith();
	}

	R_ObberyCorp.modifyFools(1);



//NEXT DAYS
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
				if (Villagers[presentIterator].showFaith() > naiveBound)
				{
					Villagers[presentIterator].modifyParticipation(1);
					newFools++;
				}
		}

		//calculations for next day
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

		cout << "Aby kontynuowac, nacisnij ENTER." << endl;
		getchar();
		
	}


	return 0;
}