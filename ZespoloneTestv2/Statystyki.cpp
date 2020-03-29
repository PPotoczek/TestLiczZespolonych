#include<iostream>
#include "Statystyki.hh"
using std::cin;
using std::cout;
using std::endl;

int Niepoprawne(Statystyki &Statystyki)
{
    int niepoprawne;
    niepoprawne = Statystyki.wszystkie - Statystyki.poprawne;
    return(niepoprawne);
}

int Procent_popr_odp(Statystyki &Statystyki)
{
    int procent;
    procent = 100 * Statystyki.poprawne/Statystyki.wszystkie;
    return(procent);
}

void Dodaj_wszystkie(Statystyki &Statystyki)
{
    Statystyki.wszystkie++;
}

void Dodaj_popr(Statystyki &Statystyki)
{
    Statystyki.poprawne++;
    Dodaj_wszystkie(Statystyki);
}

void Zeruj(Statystyki &Statystyki)
{
    Statystyki.poprawne = 0;
    Statystyki.wszystkie = 0;
}



