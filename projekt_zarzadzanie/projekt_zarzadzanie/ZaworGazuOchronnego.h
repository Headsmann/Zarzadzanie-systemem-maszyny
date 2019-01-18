#pragma once
#include "Elementy.h"
class ZaworGazuOchronnego :
	public Elementy
{
public:
	double cisnienie;
	ZaworGazuOchronnego();
	virtual void wylacz();
	virtual void zalacz();
	virtual void skomunikuj();
	void zmienCisnienie(double c);
};

