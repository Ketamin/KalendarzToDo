#include <iostream>
#include <string>
#include <vector>
#pragma once
class Uzytkownik
{
	std::string nazwa, haslo;
public:
	Uzytkownik(std::string, std::string);
	void logowanie();
	void pokazNazwe();
};

