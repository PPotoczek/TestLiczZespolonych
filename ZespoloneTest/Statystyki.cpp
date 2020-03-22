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

void dodaj_wszystkie(Statystyki &Statystyki)
{
    Statystyki.wszystkie++;
}

void dodaj_popr(Statystyki &Statystyki)
{
    Statystyki.poprawne++;
    dodaj_wszystkie(Statystyki);
}



