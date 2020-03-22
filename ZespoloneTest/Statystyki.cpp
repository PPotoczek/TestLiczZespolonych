#include<iostream>
<<<<<<< HEAD
#include "Statystyki.hh"
using std::cin;
using std::cout;
using std::endl;

int Niepoprawne(Statystyki &Statystyki)
=======
#include"statystyki.hh"
using namespace std;

int Niepoprawne(Statystyki Statystyki)
>>>>>>> 3930e29a7a23c20a6df796b3bd0370c6b8c3da97
{
    int niepoprawne;
    niepoprawne = Statystyki.wszystkie - Statystyki.poprawne;
    return(niepoprawne);
}

<<<<<<< HEAD
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



=======
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


>>>>>>> 3930e29a7a23c20a6df796b3bd0370c6b8c3da97
