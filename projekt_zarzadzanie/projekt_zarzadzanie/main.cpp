/*

Arkadiusz Pietrzak
05.12.2018

*/
#include <iostream>
#include <string>
#include "ZaworSpustowy.h"
#include "Grzalka.h"
#include "Mieszalnik.h"
#include "ZaworGazuOchronnego.h"
using namespace std;

void witaj() {
	cout << "Wykonaj komende: " << endl;
}


int main() {
	string komenda;
	//Generowanie obiektów:
	ZaworSpustowy spust1;
	Grzalka grzalka1;
	Mieszalnik mieszalnik1;
	ZaworGazuOchronnego zawor1;

	cout << "Witamy w centrum obslugi urzadzenia: " << endl;

	start:
	witaj();
	getline(cin, komenda);
	//////////////////////WLACZENIE / WYLACZENIE
	if (komenda == "Wlacz") {
		spust1.zalacz();
		grzalka1.zalacz();
		mieszalnik1.zalacz();
		zawor1.zalacz();
		cout << "-----------------URZADZENIE-----------------" << endl;
		cout << "-----------Zostalo wlaczone-----------------" << endl;
		spust1.skomunikuj();
		grzalka1.skomunikuj();
		mieszalnik1.skomunikuj();
		zawor1.skomunikuj();
	}
	if (komenda == "Wylacz") {
		spust1.wylacz();
		grzalka1.wylacz();
		mieszalnik1.wylacz();
		zawor1.wylacz();
		cout << "-----------------URZADZENIE-----------------" << endl;
		cout << "-----------Zostalo wylaczone----------------" << endl;
	}
	if (komenda == "Wylacz klienta obslugi") {
		return 0;
	}
	if (spust1.stanUrzadzenia()) {
		//////////////////STAN URZADZENIE
		if (komenda == "Wyswietl stan urzadzenia") {
			if (spust1.stanUrzadzenia()) {
				cout << "Urzadzenie dziala poprawnie" << endl;
			}
			else {
				cout << "Urzadzenie nie dziala" << endl;
			}

		}

		//////////////ZAWOR SPUSTOWY
		if (komenda == "Wyswietl stan zaworu spustowego") {
			spust1.skomunikuj();
		}
		if (komenda == "Zmien stopien otwarcia zaworu spustowego") {
			double x;
			cout << "Na ile procent? " << endl;
			cin >> x;
			if (x >= 0 && x <= 100) {
				spust1.zmienStOtwarcia(x);
				spust1.skomunikuj();
			}
			else {
				cout << "Wartosc poza zakresem 0-100, nie zmieniono wartosci" << endl;
			}
		}

		/////////GRZALKA
		if (komenda == "Wyswietl temperature grzalki") {
			grzalka1.skomunikuj();
		}
		if (komenda == "Zadaj temperature grzalce") {
			double y;
			cout << "Jaka temperature ustawic? Przedzial wynosi od 0 C do 180 C" << endl;
			cin >> y;
			if (y >= 0 && y <= 180) {
				grzalka1.zmienTempGrzalki(y);
				grzalka1.skomunikuj();
			}
			else {
				cout << "Temperatura jaka chcesz zadac nie miesci sie w zakresie od 0 do 180 C" << endl;
			}
		}
		/////////////MIESZALNIK
		if (komenda == "Wyswietl informacje o mieszalniku") {
			mieszalnik1.skomunikuj();
		}
		if (komenda == "Zmien glebokosc zanurzenia mieszalnika") {
			double z;
			cout << "Podaj na jaka ilosc metrow mieszalnik ma sie zanurzyc (min 0 - max 25): " << endl;
			cin >> z;
			if (z >= 0 && z <= 25) {
				mieszalnik1.zmienGlebZanurzenia(z);
				mieszalnik1.wyswietlGlebZanurzenia();
			}
			else {
				cout << "Mieszalnik nie jest w stanie zanurzyc sie na taka glebokosc" << endl;
			}
		}
		if (komenda == "Zmien predkosc obrotowa mieszalnika") {
			double q;
			cout << "Podaj na jaka predkosc obrotowa chcesz ustawic mieszalnik(min 0 - max 15): " << endl;
			cin >> q;
			if (q >= 0 && q <= 15) {
				mieszalnik1.zmienPredObrotowa(q);
				mieszalnik1.wyswietlPredObrotowa();
			}
			else {
				cout << "Mieszalnik nie jest w stanie krecic sie z taka predkoscia" << endl;
			}

		}
		///ZAWOR GAZU OCHRONNEGO
		if (komenda == "Wyswietl informacje o ZGO") {
			zawor1.skomunikuj();
		}
		if (komenda == "Ustaw cisnienie w ZGO") {
			double w;
			cout << "Podaj jakie cisnienie chcesz ustawic(min 0 - max 3): " << endl;
			cin >> w;
			if (w >= 0 && w <= 3) {
				zawor1.zmienCisnienie(w);
				zawor1.skomunikuj();
			}
			else {
				cout << "Nie mozna ustawic takiego cisnienia w ZGO" << endl;
			}

		}
		///OGOLNIE INFORMACJE
		if (komenda == "Wyswietl ogolne informacje o urzadzeniu") {
			spust1.skomunikuj();
			grzalka1.skomunikuj();
			mieszalnik1.skomunikuj();
			zawor1.skomunikuj();
		}
	}
	else {
		cout << "Urzadzenie nie dziala. Prosze wlaczyc urzadzenie" << endl;
	}


	goto start;


	system("pause");
}