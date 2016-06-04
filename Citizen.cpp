#include "Citizen.h"

using namespace std;

void Citizen::calculateFaith()
{
	faith = 10500 - money + rand()%5000;// "Naiwność od 0 do 15500"
}

bool Citizen::checkLiving()
{
	if (age > 30)  {alive = false; return false;};// "Śmierć."
}