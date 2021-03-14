#include "Kalendarz.h"

Kalendarz::Kalendarz() {
	id_kalendarza = ++id_kalendarza_licznik;
	std::cout << "Konstuktor domyslny\n";
}
void Kalendarz::dodajZadanieDoKalendarza(Zadanie& z) {
	this->zadania.push_back(z);
	std::cout << "Dodano zadanie do kalendarza!\n";
}
void Kalendarz::wypiszZadaniaZKalendarza() {
	for (int i = 0; i < this->zadania.size(); i++) {
		zadania[i].wypiszZadanie();
	}
}
void Kalendarz::standardowy() {
	nazwa = "Standardowy";
	wlasciciel = "DO POPRAWY!";
	std::cout << "Kalendarz standardowy zostal utworzony!" << std::endl;
}
void Kalendarz::wypisz() {
	std::cout << "Nazwa = " << this->nazwa << std::endl;
	std::cout << "Wlasciciel = " << this->wlasciciel << std::endl;
	std::cout << "Id kalendarza = " << this->id_kalendarza << std::endl;
}
void Kalendarz::wczytajZadaniaZPliku() {

	std::string nazwa_, opis_, data_, waznosc_, autor_;
	int id_zadania_, id_kalendarza_, id_uzytkownika_;
	bool wykonane_;
	std::fstream plik;
	plik.open("zadania.txt", std::ios::in);

	if (plik.good() == false) {
		std::cout << "Nie udalo sie odczytac pliku!" << std::endl;
	}
	std::string linia;
	int nr_linii = 1;
	int nr_zadania = 0;
	while (getline(plik, linia)) {
		switch (nr_linii) {
		case 1: nazwa_ = linia; break;
		case 2: opis_ = linia; break;
		case 3: data_ = linia; break;
		case 4: waznosc_ = linia; break;
		case 5: autor_ = linia; break;
		case 6: id_zadania_ = std::stoi(linia); break;
		case 7: id_kalendarza_ = std::stoi(linia); break;
		case 8: id_uzytkownika_ = std::stoi(linia); break;
		case 9: wykonane_ = std::stoi(linia); break;
		}
		if (nr_linii == 9) { 
			nr_linii = 0;
			//nr_zadania++; 

			Zadanie* temp = new Zadanie(nazwa_, opis_, data_, waznosc_, autor_, id_zadania_, id_kalendarza_, id_uzytkownika_, wykonane_);

			std::cout << "Dodaje zadanie " << nazwa_ << " do kalendarza o id = " << id_kalendarza_ << std::endl;
			this->dodajZadanieDoKalendarza(*temp);

			delete temp;
		}
		nr_linii++;
	}

	plik.close();
}