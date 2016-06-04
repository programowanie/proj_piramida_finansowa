#include "Pyramid.h"

using namespace std;

void Pyramid::report()
{
	cout << "Stan na rok " << year << "." << endl
		 << "   Liczba pieniedzy w skarbcu: " << money << endl
		 << "   Liczba osob naciagnietych: " << numberOfFools << endl
		 << "   Wzrost liczby naciagnietych: " << numberOfFools - numberOfFoolsYesterday << endl
		 << "   Suma wplywow: " << amountIn * (numberOfFools - numberOfFoolsYesterday) << endl
		 << "   Suma wyplat: " << amountOut*(numberOfFoolsYesterday) << endl
		 << "   Zarobek: " << income << endl;
	if (year > 0) cout  << "   Procentowy wzrost naciagnietych " << 100.0*(numberOfFools)/(numberOfFoolsYesterday)-100.0 << "%\n";
	cout << "   Probowalismy naciagnac do tej pory " << range << " osob." << endl << endl;
}

void Pyramid::calculateIncome()
{
	income = amountIn * (numberOfFools - numberOfFoolsYesterday) - amountOut*(numberOfFoolsYesterday);
}