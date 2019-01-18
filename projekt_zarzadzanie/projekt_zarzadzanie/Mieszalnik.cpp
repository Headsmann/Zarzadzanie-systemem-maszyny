#include "Mieszalnik.h"



Mieszalnik::Mieszalnik()
{
	glebZanurzenia = 0;
	predkObrotowa = 0;
}
//WYLACZA URZADZENIE
void Mieszalnik::wylacz()
{
	Elementy::isWorking = false;
}
//W£¥CZ URZADZENIE
void Mieszalnik::zalacz()
{
	Elementy::isWorking = true;
}
//WYSWIETLA INFORMACJE DOTYCZACE MIESZALNIKA
void Mieszalnik::skomunikuj()
{
	cout << "Glebokosc zanurzenie mieszalnika wynosi: " << glebZanurzenia << " metrow" << endl;
	cout << "Predkosc obrotowa mieszalnika wynosi: " << predkObrotowa << " m/s" << endl;
}

void Mieszalnik::zmienGlebZanurzenia(double a)
{
	glebZanurzenia = a;
}

void Mieszalnik::zmienPredObrotowa(double b)
{
	predkObrotowa = b;
}

void Mieszalnik::wyswietlGlebZanurzenia()
{
	cout << "Glebokosc zanurzenie mieszalnika wynosi: " << glebZanurzenia << " metrow" << endl;
}

void Mieszalnik::wyswietlPredObrotowa()
{
	cout << "Predkosc obrotowa mieszalnika wynosi: " << predkObrotowa << " m/s" << endl;
}

