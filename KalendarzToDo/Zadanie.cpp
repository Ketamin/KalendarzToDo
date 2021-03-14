#include <iostream>
#include <string>
#include "Zadanie.h"
#include "Kalendarz.h"
#include <conio.h> // do usuniecia
#include <fstream>

Zadanie::Zadanie() {

	this->id_zadania = ++id_zadania_licznik;
	this->id_kalendarza = Kalendarz::id_kalendarza_licznik;
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
	this->data = sprawdzanieDaty;
	std::cout << "Prosze podac waznosc zadania\n 1.Malo wazne\n 2.Wazne\n 3.Bardzo wazne\n";
	std::cin >> this->waznosc;
	std::cout << "Wpisywanie autora zadania\n";
	this->wykonane = false;
	this->autor = "Domyslny";
	std::cin.ignore();

	std::cout << "Na sam koniec id_zadania_licznik = " << id_zadania_licznik << std::endl;
	_getch();
}

Zadanie::Zadanie(std::string nazwa_, std::string opis_, std::string data_, std::string waznosc_, std::string autor_, bool wykonane_ = 0) {
	nazwa = nazwa_;
	opis = opis_;
	data = data_;
	waznosc = waznosc_;
	autor = autor_;
	wykonane = wykonane_;
	id_zadania = ++id_zadania_licznik;
	id_kalendarza = pokazLicznik();
	// DOMYSLNIE ZADANIE JEST ZAWSZE DODAWANE DO OSTATNIO STWORZONEGO KALENDARZA!
}

Zadanie::~Zadanie() {
	std::cout << "Usuwam wlasnie element\n";
	//--id_zadania_licznik;
	//_getch();
	// testowanie
}

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
	this->data = sprawdzanieDaty;
	std::cout << "Prosze podac waznosc zadania\n 1.Malo wazne\n 2.Wazne\n 3.Bardzo wazne\n";
	std::cin >> this->waznosc;
	std::cout << "Wpisywanie autora zadania\n";
	this->wykonane = false;
	std::cin.ignore();

	this->id_zadania = ++id_zadania_licznik;

	//this->Kalendarz::dodajZadanieDoKalendarza(this);

}
void Zadanie::wypiszZadanie() {
	std::cout << "------------------------------------------------------------------\n";
	std::cout << "Wypisuje zadanie \n id_zadania = "
		<< this->id_zadania << "\nid_kalendarza = "
		<< this->id_kalendarza << "\nnazwa = "
		<< this->nazwa << "\nopis = "
		<< this->opis << "\ndata = "
		<< this->data << "\nwaznosc = "
		<< this->waznosc << "\nautor = "
		<< this->autor << "\nCzy zadanie zostalo wykonane = ";
	if (this->wykonane) {
		std::cout << "tak\n";
	}
	else {
		std::cout << "to zadanie nie zostalo jescze wykonane\n";
	}
	std::cout << "------------------------------------------------------------------\n";

}
int Zadanie::pokazLicznik() {
	return Kalendarz::id_kalendarza_licznik;
}
void Zadanie::zapiszDoPliku() {
	//using namespace std;
	std::fstream plik;
	//std::cout << "Uwaga zapisuje do pliku: " << this->nazwa << std::endl;
	plik.open("zadania.txt", std::ios::out);
		plik << this-> nazwa << std::endl;
		plik << this-> opis << std::endl;
		plik << this-> data << std::endl;
		plik << this-> waznosc << std::endl;
		plik << this-> autor << std::endl;
		plik << this-> id_zadania << std::endl;
		plik << this-> id_kalendarza << std::endl;
		plik << this-> id_uzytkownika << std::endl;
		plik << this-> wykonane << std::endl;
		plik.close();
}