#include <iostream>
#include "Zadanie.h"
#include "Kalendarz.h"
#include "Uzytkownik.h"

using namespace std;

int main()
{
    Uzytkownik u1("filip", "admin");
    u1.logowanie();
    while (1) {
        u1.pokazNazwe();
    }
}
