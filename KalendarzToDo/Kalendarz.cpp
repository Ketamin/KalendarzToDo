#include "Kalendarz.h"

Kalendarz::Kalendarz() {
	id_kalendarza = ++id_kalendarza_licznik;
	std::cout << "Konstuktor domyslny\n";
}
void Kalendarz::dodajZadanieDoKalendarza(Zadanie& z){
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