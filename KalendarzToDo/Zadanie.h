#include <iostream>
#include <string>
#pragma once
class Zadanie
{
	std::string nazwa, opis, data, waznosc, autor;
	bool wykonane;
public:

	Zadanie(std::string, std::string, std::string, std::string, std::string, bool);

	void dodajZadanie();
	void wypiszZadanie();

};

