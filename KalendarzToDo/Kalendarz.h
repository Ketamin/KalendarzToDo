#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "Zadanie.h"

#pragma once
class Kalendarz
{
	std::string nazwa, wlasciciel;
	int id_kalendarza;
	static int id_kalendarza_licznik;
	std::vector <Zadanie> zadania;

public:

	Kalendarz();
	void dodajZadanieDoKalendarza(Zadanie& z);
	friend void Zadanie::wypiszZadanie();
	friend Zadanie::Zadanie();
	friend Zadanie::Zadanie(std::string, std::string, std::string, std::string, std::string, int, int, int, bool);
	friend Zadanie::~Zadanie();
	friend int Zadanie::pokazLicznik();
	void wypiszZadaniaZKalendarza();
	void standardowy();
	void wypisz();
	void wczytajZadaniaZPliku();
};