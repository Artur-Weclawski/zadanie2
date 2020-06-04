
#include "szescian.h"
#include <iostream>

using namespace std;

void szescian::oblicz_objetosc( double bok )
{
	double wynik = bok * bok * bok;
	cout << "Objetosc szescianu = " << wynik << endl;
}
void szescian::oblicz_pole_cube( double bok )
{
	double wynik = 6 * bok * bok;
	cout << "Pole calkowite szescianu = " << wynik << endl;
}
