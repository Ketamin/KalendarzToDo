#include "Kalendarz.h"

void Kalendarz::dodajZadanieDoKalendarza(Zadanie& z){
	this->zadania.push_back(z);
	std::cout << "Dodano zadanie do kalendarza!\n";
}
void Kalendarz::wypiszZadaniaZKalendarza() {
	for (int i = 0; i < this->zadania.size(); i++) {
		zadania[i].wypiszZadanie();
	}
}