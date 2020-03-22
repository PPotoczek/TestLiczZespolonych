#ifndef STATYSTYKI_HH
#define STATYSTYKI_HH

struct Statystyki
{
    int poprawne;
    int wszystkie;
};

<<<<<<< HEAD
int Niepoprawne(Statystyki &Statystyki);

int Procent_popr_odp(Statystyki &Statystyki);
=======
int Niepoprawne(Statystyki Statystyki);

int Procent_popr_odp(Statystyki Statystyki);
>>>>>>> 3930e29a7a23c20a6df796b3bd0370c6b8c3da97

void dodaj_popr(Statystyki &Statystyki);

void dodaj_wszystkie(Statystyki &Statystyki);

#endif //STATYSTYKI_HH
