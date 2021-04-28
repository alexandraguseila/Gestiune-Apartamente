#pragma once
#include "Cheltuiala.h"

class Repo
{
private:
	Cheltuiala cheltuieli[50];
	int nrCheltuieli;
public:
	Repo();
	~Repo();
	void addCheltuiala(Cheltuiala& c);
	Cheltuiala getCheltuiala(int pozitie);
	int getNrCheltuieli();
};

