#include "Uzytkownik.h"

Uzytkownik::Uzytkownik(std::string nazwa_, std::string haslo_) {
	nazwa = nazwa_;
	haslo = haslo_;
}

void Uzytkownik::logowanie(){
	std::string nazwa_, haslo_;
	int licznik = 3;
	while (nazwa_ != nazwa && haslo_ != haslo) {
		std::cout << "Podaj nazwe uzytkownika: ";
		std::cin >> nazwa_;
		std::cout << "Podaj haslo: ";
		std::cin >> haslo_;
		if (licznik == 0) {
			std::cout << "Zostales zablokowany! Skontaktuj sie z administratorem sysytemu!\n";
		}
		if (nazwa_ != nazwa && haslo_ != haslo) {
			std::cout << "Niepoprawne dane! zostaly ci " << licznik << " proby\n";
		}
		licznik--;
	}
	std::cout << "Zostales zalogowany!";
}

void Uzytkownik::pokazNazwe() {
	std::cout << nazwa;
}