#include <iostream>
#include <vector>
#include <conio.h>
#include "Zadanie.h"
#include "Kalendarz.h"
#include "Uzytkownik.h"

std::vector <Zadanie> listaZadan;
std::vector <Kalendarz> listaKalendarzy;

using namespace std;
int Zadanie::id_zadania_licznik = 0;
int Kalendarz::id_kalendarza_licznik = 0;

void wyswietlMenu();
void podmenuZadania();
void podmenuKalendarz();
void podmenuUzytkownicy();
void standardowyKalendarz();

int choice;
bool wyjscie = 0;

int main()
{

    standardowyKalendarz();
    _getch();

    while (1) {
        wyjscie = 0;
        wyswietlMenu();
        choice = _getch();
        switch (choice) {
        case '1' :
            while (wyjscie == 0) {
                podmenuZadania();
            }
            break;
        case '2':
            while (wyjscie == 0) {
                podmenuKalendarz();
            }
        case '3' :
            while (wyjscie == 0) {
                podmenuUzytkownicy();
            }
        case '0' :
            cout << "Koniec programu!" << endl;
            break;
        default:
            cout << "Nie ma takiej opcji" << endl;
            break;
        }
    }
}

void wyswietlMenu() {
    system("cls");
    cout << "---------------Kalendarz---------------" << endl;
    cout << endl;
    cout << "    1.Zadania" << endl;
    cout << "    2.Kalendarze" << endl;
    cout << "    3.Uzytkownicy" << endl;
    cout << "    0.Wyjscie" << endl;
    cout << endl;
    cout << "---------------------------------------" << endl;
}

void podmenuZadania() {
    system("cls");
    cout << "----Wybrano podmenu Zadania----" << endl;
    cout << endl;
    cout << "    1.Dodaj nowe zadanie" << endl;
    cout << "    2.Usun zadanie" << endl;
    cout << "    3.Pokaz zadania" << endl;
    cout << "    0.Cofnij" << endl;
    cout << endl;
    cout << "-------------------------------" << endl;
    choice = _getch();
    
    switch (choice) {
    case '1':
    {
        cout << "Wybrano dodaj nowe zadanie" << endl;

        Zadanie* temp = new Zadanie;
        listaZadan.push_back(*temp);
        delete temp;
    }
        break;
    case '2':
        cout << "Wybrano usun zadanie" << endl;
        break;
    case '3':
    {
        cout << "Wybrano pokaz zadania" << endl;
        cout << endl;
        for (int i = 0; i < listaZadan.size(); i++) {
            listaZadan[i].wypiszZadanie();
        }
        _getch();
    }
        break;
    case '0':
        wyjscie = 1;
        break;
    default:
        cout << "Wybrano zla opcje" << endl;
        break;
    }
}

void podmenuUzytkownicy() {
    system("cls");
    cout << "----Wybrano podmenu Kalendarz----" << endl;
    cout << endl;
    cout << "    1.Dodaj nowy kalendarz" << endl;
    cout << "    2.Usun kalendarz" << endl;
    cout << "    3.Pokaz kalendarze" << endl;
    cout << "    0.Cofnij" << endl;
    cout << endl;
    cout << "----------------------------------" << endl;
    choice = _getch();

    switch (choice) {
    case '1':
        cout << "Wybrano dodaj nowy kalendarz" << endl;
        break;
    case '2':
        cout << "Wybrano usun kalendarz" << endl;
        break;
    case '3':
        cout << "Wybrano pokaz kalendarze" << endl;
        break;
    case '0':
        wyjscie = 1;
        break;
    default:
        podmenuKalendarz();
        break;
    }
}

void podmenuKalendarz() {
    system("cls");
    cout << "----Wybrano podmenu Uzytkownicy----" << endl;
    cout << endl;
    cout << "    1.Dodaj nowego uzytkownika" << endl;
    cout << "    2.Usun uzytkownika" << endl;
    cout << "    3.Pokaz uzytkownikow" << endl;
    cout << "    0.Cofnij" << endl;
    cout << endl;
    cout << "----------------------------------" << endl;
    choice = _getch();

    switch (choice) {
    case '1':
        cout << "Wybrano dodaj nowego uzytkownika" << endl;
        break;
    case '2':
        cout << "Wybrano usun uzytkownika" << endl;
        break;
    case '3':
        cout << "Wybrano pokaz uzytkownikow" << endl;
        break;
    case '0':
        wyjscie = 1;
        break;
    default:
        podmenuKalendarz();
        break;
    }
}

void standardowyKalendarz() {
    Kalendarz k;
    k.standardowy();
    k.wypisz();
}