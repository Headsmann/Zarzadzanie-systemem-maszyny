#pragma once
#include <iostream>
#include "Elementy.h"

using namespace std;
class ZaworSpustowy : public Elementy
{
public:
	double stopOtwZaworu;
	ZaworSpustowy();
	virtual void wylacz();
	virtual void zalacz();
	virtual void skomunikuj();
	bool stanUrzadzenia();
	void zmienStOtwarcia(double a);
};

