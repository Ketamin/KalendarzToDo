#include <iostream>
#include <string>
#pragma once
class Zadanie
{
	std::string nazwa, opis, data, waznosc, autor;
	int id_zadania, id_kalendarza, id_uzytkownika;
	static int id_zadania_licznik;
	bool wykonane;
public:

	Zadanie(std::string, std::string, std::string, std::string, std::string, bool);
	Zadanie();
	~Zadanie();

	int pokazLicznik();
	void dodajZadanie();
	void wypiszZadanie();
	void zapiszDoPliku();
};