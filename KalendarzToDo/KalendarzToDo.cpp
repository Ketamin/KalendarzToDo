#include <iostream>
#include "Zadanie.h"
#include "Kalendarz.h"
#include "Uzytkownik.h"

using namespace std;

int main()
{
    Zadanie z1("Kolacja", "Brak", "20/03/2020", "wazne", "autor",0);
    Zadanie z2("Obiad", "Brak", "21/03/2020", "wazne", "autor",0);
    Kalendarz k;
    k.dodajZadanieDoKalendarza(z1);
    k.dodajZadanieDoKalendarza(z2);
    k.wypiszZadaniaZKalendarza();
}
