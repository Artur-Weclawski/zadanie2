
#include <iostream>
#include "kwadrat.h"
#include "szescian.h"

using namespace std;

int main()
{

	kwadrat wynik_pole;
	szescian wynik_objetosc;
	double bok;
	cout << "Podaj dlugosc boku: bok = ";
	cin >> bok;
	wynik_pole.oblicz_pole(bok);
	wynik_objetosc.oblicz_pole_cube(bok);
	wynik_objetosc.oblicz_objetosc(bok);
	return 0;
}
