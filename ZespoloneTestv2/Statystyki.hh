#ifndef STATYSTYKI_HH
#define STATYSTYKI_HH

struct Statystyki
{
    int poprawne;
    int wszystkie;
};

int Niepoprawne(Statystyki &Statystyki);

int Procent_popr_odp(Statystyki &Statystyki);

void Dodaj_popr(Statystyki &Statystyki);

void Dodaj_wszystkie(Statystyki &Statystyki);

void Zeruj(Statystyki &Statystyki);

#endif //STATYSTYKI_HH
