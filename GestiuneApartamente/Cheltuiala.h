#pragma once
#include <iostream>
#include <string.h>

class Cheltuiala
{
private://Creaza clasa Cheltuiala
	int apartament;
	int suma;
	char* tip;
public:
	Cheltuiala();//CONSTRUCTOR: creeaza un obiect Cheltuiala gol
	Cheltuiala(int ap, int suma, char* tip);//CONSTRUCTOR CU PARAMETRII: creeaza un obiect Cheltuiala cu valorile date
	Cheltuiala(const Cheltuiala& c);//COPIAZA obiectul c dat ca parametru
	~Cheltuiala();//DECOSNTRUCTOR: sterge elementul curent
	int getApartament();
	int getSuma();
	char* getTip();
	void setApartament(int newAp);
	void setSuma(int newSuma);
	void setTip(char* newTip);
	bool operator==(const Cheltuiala &c);
};

