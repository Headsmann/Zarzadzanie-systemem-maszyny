#pragma once
#include <iostream>



using namespace std;

class Elementy
{
public:
	bool isWorking = false;
	virtual void wylacz() = 0; 
	virtual void zalacz() = 0;
	virtual void skomunikuj() = 0;
};

