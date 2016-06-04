#include <iostream>
#include <cstdlib>

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
	       << "A moze wszystkich " << population-1 << " sasiadow?" << endl << endl
	       << "Oferta firmy R.Obbery Corp. jest wlasnie dla Ciebie!" << endl
	       << "Za jedyne " << amountIn << "$ wplaty wlasnej zapewnimy Ci staly dochod roczny w wysokosci " << amountOut << "$!" << endl
	       << "Bez ryzyka, bez formalnosci, po cichu, by Urzad Skarbowy sie nie dowiedzial!" << endl
	       << "Z oferty moga korzystac osoby w wieku od 5 do 30 lat" << endl
	       << "Zadzwon juz dzis - 544 342 678!" << endl << endl << endl
	       << "Aby kontynuowac, nacisnij ENTER." << endl;
	getchar();
	system("clear");
}