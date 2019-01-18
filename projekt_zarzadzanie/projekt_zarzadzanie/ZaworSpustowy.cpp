#include "ZaworSpustowy.h"

using namespace std;
//KONSTRUKTOR
ZaworSpustowy::ZaworSpustowy()
{
	stopOtwZaworu = 0;
}
//WYLACZA URZADZENIE
void ZaworSpustowy::wylacz()
{
	Elementy::isWorking = false;
}
//W£¥CZ URZADZENIE
void ZaworSpustowy::zalacz()
{
	Elementy::isWorking = true;
}
//WYSWIETLA INFORMACJE DOTYCZACE ZAWORU SPUSTOWEGO
void ZaworSpustowy::skomunikuj()
{
	cout << "Stopien otwarcia zaworu wynosi: " << stopOtwZaworu << "%" << endl;
}
//ZMIENIA STOPIEN OTWARCIA ZAWORU
void ZaworSpustowy::zmienStOtwarcia(double a)
{
	stopOtwZaworu = a;
}
//sprawdza czy urz¹dzenie jest w³¹czone
bool ZaworSpustowy::stanUrzadzenia() {
	return Elementy::isWorking;
}




