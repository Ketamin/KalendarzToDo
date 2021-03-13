#include <iostream>
#include <string>
#include "Zadanie.h"

void Zadanie::dodajZadanie() {
	std::string dodacOpis;
	std::string sprawdzanieDaty;
	std::cout << "Dodajesz wlasnie zadanie do listy..." << std::endl;
	std::cout << "Podaj nazwe zadania: ";
	std::getline(std::cin, this->nazwa);
	std::cout << "Czy chcesz dodac opis do zadania? (t/n)";
	std::cin >> dodacOpis;
	if (dodacOpis == "t" || dodacOpis == "T") {
		std::cin.ignore();
		std::cout << "Dobrze zatem podaj opis: ";
		std::getline(std::cin, this->opis);
	}
	else if (dodacOpis == "n" || dodacOpis == "N") {
		std::cout << "Dobrze w takim razie wpisuje 'Brak' do opisu\n";
		this->opis = "Brak";
	}
	else {
		std::cout << "Wybrano niewlasciwa opcje...\n W takiej sytuacji wpisze 'Brak' do opisu\n";
		this->opis = "Brak";
	}
	std::cout << "Prosze podac date na jaka planujesz zadanie (dd/mm/rrrr) : ";
		std::cin >> sprawdzanieDaty;
		while (sprawdzanieDaty.at(2) != '/' && sprawdzanieDaty.at(5) != '/') {
			std::cout << "\nPodano zly format daty sproboj jescze raz lub napisz 'cancel' aby anulowac dodawanie zadania\n";
			std::cout << "Prosze podac date na jaka planujesz zadanie (dd/mm/rrrr) : ";
			std::cin >> sprawdzanieDaty;
			if (sprawdzanieDaty == "cancel") {
				std::cout << "Usuwam cale zadanie!";
				/////////////
				/////////////
				/////////////
			}
		}
	std::cout << "Prosze podac waznosc zadania\n 1.Malo wazne\n 2.Wazne\n 3.Bardzo wazne\n";
	std::cin >> this->waznosc;
	std::cout << "Wpisywanie autora zadania\n";
	this->wykonane = false;
}
void Zadanie::wypiszZadanie() {
	std::cout << "Wypisuje zadanie \nnazwa = " << this->nazwa << "\nopis = " << this->opis << "\ndata = "
		<< this->data << "\nwaznosc = " << this->waznosc << "\nautor = " << this->autor << "\nCzy zadanie zostalo wykonane = ";
	if (this->wykonane) {
		std::cout << "tak";
	}
	else {
		std::cout << "to zadanie nie zostalo jescze wykonane";
	}
}