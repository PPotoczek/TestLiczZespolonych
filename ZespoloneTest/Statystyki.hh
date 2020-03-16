#ifndef STATYSTYKI_HH
#define STATYSTYKI_HH

struct Statystyki
{
    int poprawne;
    int wszystkie;
};

int Niepoprawne(Statystyki Statystyki);

int Procent_popr_odp(Statystyki Statystyki);

void dodaj_popr(Statystyki &Statystyki);

void dodaj_wszystkie(Statystyki &Statystyki);

#endif //STATYSTYKI_HH
