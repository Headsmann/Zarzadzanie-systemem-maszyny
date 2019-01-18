#include "ZaworGazuOchronnego.h"



ZaworGazuOchronnego::ZaworGazuOchronnego()
{
	cisnienie = 0;
}
//WYLACZA URZADZENIE
void ZaworGazuOchronnego::wylacz()
{
	Elementy::isWorking = false;
}
//W£¥CZ URZADZENIE
void ZaworGazuOchronnego::zalacz()
{
	Elementy::isWorking = true;
}
//WYSWIETLA INFORMACJE DOTYCZACE ZAWORU GAZU OCHRONNEGO
void ZaworGazuOchronnego::skomunikuj()
{
	cout << "Cisnienie w zaworze gazu ochronnego wynosi: " << cisnienie << " bar" << endl;
}

void ZaworGazuOchronnego::zmienCisnienie(double c)
{
	cisnienie = c;
}
