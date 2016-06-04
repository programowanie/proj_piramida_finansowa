#include "Citizen.h"

using namespace std;

void Citizen::calculateFaith()
{
	faith = 10500 - money + rand()%5000;// "Naiwność od 0 do 15500"
}

