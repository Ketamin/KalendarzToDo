#include <iostream>
#include <string>
#include <vector>
#include "Kalendarz.h"
#pragma once
class Uzytkownik
{
	std::vector <Kalendarz> kalendarze;
	std::string nazwa, haslo;
	static int id_uzytkownika;
public:
	Uzytkownik();
	Uzytkownik(std::string, std::string);
	void dodajKalendarze(Kalendarz& k);
	void logowanie();
	void pokazNazwe();
};