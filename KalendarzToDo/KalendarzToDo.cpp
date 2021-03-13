#include <iostream>
#include "Zadanie.h"
#include "Kalendarz.h"
#include "Uzytkownik.h"

using namespace std;
int Zadanie::id_zadania_licznik = 0;
int Kalendarz::id_kalendarza_licznik = 0;
int main()
{
    Kalendarz k1;
    Zadanie* w1 = new Zadanie("Kolacja", "Brak", "20/03/2020", "wazne", "filip", 0);
    //Zadanie* w2 = new Zadanie("Obiad", "Brak", "21/03/2020", "srednio wazne", "filip", 0);
    
    Uzytkownik u1;
    u1.dodajKalendarze(k1);

    k1.dodajZadanieDoKalendarza(*w1);
    //k1.dodajZadanieDoKalendarza(*w2);

    k1.wypiszZadaniaZKalendarza();

    delete w1;

    k1.wypiszZadaniaZKalendarza();
}
