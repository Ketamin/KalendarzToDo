#include <iostream>
#include <string>
#include <vector>
#include "Zadanie.h"

#pragma once
class Kalendarz
{
	std::string nazwa, wlasciciel;
	int id_kalendarza;
	std::vector <Zadanie> zadania;

public:
	static int id_kalendarza_licznik;
	Kalendarz();
	void dodajZadanieDoKalendarza(Zadanie& z);
	friend void Zadanie::wypiszZadanie();
	friend Zadanie::~Zadanie();
	void wypiszZadaniaZKalendarza();
};