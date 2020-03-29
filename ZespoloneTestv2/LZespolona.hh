#ifndef LZESPOLONA_HH
#define LZESPOLONA_HH

/*!
 *  Plik zawiera definicje struktury LZesplona oraz zapowiedzi
 *  przeciazen operatorow arytmetycznych dzialajacych na tej
 *  strukturze.
 */


/*!
 * Modeluje pojecie liczby zespolonej
 */
struct  LZespolona {
    double   re;    /*! Pole repezentuje czesc rzeczywista. */
    double   im;    /*! Pole repezentuje czesc urojona. */
};


/*
 * Dalej powinny pojawic sie zapowiedzi definicji przeciazen operatorow
 */

void Sprzezenie(LZespolona &L);

double Modul(LZespolona L);

void DzieleniePrzezRzeczywista(LZespolona &L, double rzeczywista);

LZespolona  operator + (LZespolona  Skl1,  LZespolona  Skl2);

LZespolona operator - (LZespolona Skl1, LZespolona Skl2);

LZespolona operator * (LZespolona Skl1, LZespolona Skl2);

LZespolona  operator / (LZespolona  Skl1, LZespolona  Skl2);

bool operator == (LZespolona Skl1, LZespolona Skl2);

bool operator != (LZespolona Skl1, LZespolona Skl2);

std::ostream & operator << (std::ostream & str, LZespolona &Wynik);

std::istream & operator >> (std::istream & str, LZespolona &L);


#endif
