#pragma once


#include <iostream>
#include "Elementy.h"

using namespace std;
class Grzalka : public Elementy
{
public:
	double temperatura;
	Grzalka();
	virtual void wylacz();
	virtual void zalacz();
	virtual void skomunikuj();
	void zmienTempGrzalki(double a);
};
