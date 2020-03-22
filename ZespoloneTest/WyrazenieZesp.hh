#ifndef WYRAZENIEZESP_HH
#define WYRAZENIEZESP_HH



#include "LZespolona.hh"


/*!
 * Modeluje zbior operatorow arytmetycznych.
 */
enum Operator
{
    Op_Dodaj = '+', Op_Odejmij = '-', Op_Mnoz = '*', Op_Dziel = '/'
};


/*
 * Modeluje pojecie dwuargumentowego wyrazenia zespolonego
 */
struct WyrazenieZesp {
    LZespolona   Arg1;   // Pierwszy argument wyrazenia arytmetycznego
    Operator     Op;     // Opertor wyrazenia arytmetycznego
    LZespolona   Arg2;   // Drugi argument wyrazenia arytmetycznego
};


/*
 * Funkcje ponizej nalezy zdefiniowac w module.
 *
 */


<<<<<<< HEAD
std::istream & operator >> (std::istream & str, WyrazenieZesp &WyrZ);
std::ostream & operator << (std::ostream & str, WyrazenieZesp &WyrZ);
=======
void Wyswietl(WyrazenieZesp  WyrZ);
>>>>>>> 3930e29a7a23c20a6df796b3bd0370c6b8c3da97
LZespolona Oblicz(WyrazenieZesp  WyrZ);

#endif
