#include "Grzalka.h"


using namespace std;

Grzalka::Grzalka()
{
	temperatura = 0;
}

//WYLACZA URZADZENIE
void Grzalka::wylacz()
{
	Elementy::isWorking = false;
}
//W£¥CZ URZADZENIE
void Grzalka::zalacz()
{
	Elementy::isWorking = true;
}
//WYSWIETLA INFORMACJE DOTYCZACE GRZALKI
void Grzalka::skomunikuj()
{
	cout << "Temperatura grzalki wynosi: " << temperatura << " C" << endl;
}

void Grzalka::zmienTempGrzalki(double a)
{
	temperatura = a;
}
