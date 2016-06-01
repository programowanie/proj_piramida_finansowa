//This code contains poem by unknown but talented Polish writer. Please read it carefully before assesment.
#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <string>
#include <ctime>
#include "Pyramid.cpp"
#include "Citizen.cpp"

#define population 50000

using namespace std;

int main(int argc, char** argv)
{
	srand(time(NULL));
	Citizen Villagers[population];
	Pyramid R_ObberyCorp;

//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
//      PSEUDO WIERSZ POLECEŃ
	int mode = 0;
	int degree = 4;
	int amountIn = 1000;
	int amountOut = 50;

	R_ObberyCorp.modifyAmountIn(amountIn);
	R_ObberyCorp.modifyAmountOut(amountOut);

//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

//pierwszy dzień
	R_ObberyCorp.modifyFools(1);

//kolejne dni
	bool OK = true;
	while(OK)
	{
		R_ObberyCorp.calculateIncome();
		R_ObberyCorp.modifyMoney(R_ObberyCorp.showIncome());
		R_ObberyCorp.report();
		
		if(degree*R_ObberyCorp.showFools() <= population) 
			R_ObberyCorp.modifyFools(R_ObberyCorp.showFools()*4);
		else break;
		R_ObberyCorp.nextDay();
	}


	return 0;
}