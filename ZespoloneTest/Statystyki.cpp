#include<iostream>
#include"statystyki.hh"
using namespace std;

int Niepoprawne(Statystyki Statystyki)
{
    int niepoprawne;
    niepoprawne = Statystyki.wszystkie - Statystyki.poprawne;
    return(niepoprawne);
}

int Procent_popr_odp(Statystyki Statystyki)
{
    int procent;
    procent = Statystyki.poprawne/Statystyki.wszystkie;
}

void dodaj_popr(Statystyki &Statystyki)
{
    Statystyka.poprawne++;
}

void dodaj_wszystkie(Statystyki &Statystyki)
{
    Statystyki.wszystkie++;
}


