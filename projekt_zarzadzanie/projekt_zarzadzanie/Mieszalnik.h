#pragma once
#include "Elementy.h"
class Mieszalnik :
	public Elementy
{
public:
	double glebZanurzenia;
	double predkObrotowa;
	Mieszalnik();
	virtual void wylacz();
	virtual void zalacz();
	virtual void skomunikuj();
	void zmienGlebZanurzenia(double a);
	void zmienPredObrotowa(double b);
	void wyswietlGlebZanurzenia();
	void wyswietlPredObrotowa();
};

