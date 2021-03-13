#include <iostream>
#include <string>
#pragma once
class Zadanie
{
	std::string nazwa, opis, data, waznosc, autor;
	bool wykonane;
public:
	//Zadanie();

	void dodajZadanie();
	void wypiszZadanie();
};

