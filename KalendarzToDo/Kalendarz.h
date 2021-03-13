#include <iostream>
#include <string>
#include <vector>
#include "Zadanie.h"

#pragma once
class Kalendarz
{
	std::string nazwa, wlasciciel;
	std::vector <Zadanie> zadania;

public:
	void dodajZadanieDoKalendarza(Zadanie& z);
	friend void Zadanie::wypiszZadanie();
	void wypiszZadaniaZKalendarza();
};

