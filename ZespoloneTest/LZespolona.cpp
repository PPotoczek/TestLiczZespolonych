#include <iostream>
#include<math.h>
#include "LZespolona.hh"
using namespace std;

/*!
 * Realizuje dodanie dwoch liczb zespolonych.
 * Argumenty:
 *    Skl1 - pierwszy skladnik dodawania,
 *    Skl2 - drugi skladnik dodawania.
 * Zwraca:
 *    Sume dwoch skladnikow przekazanych jako parametry.
 */

void Sprzezenie(LZespolona &L)
{
    L.im = -L.im;
}

double Modul(LZespolona L)
{
    double Wynik;
    Wynik = sqrt(L.re*L.re + L.im*L.im);
    return(Wynik);
}

void DzieleniePrzezRzeczywista(LZespolona &L, double rzeczywista)
{
    L.re = L.re/rzeczywista;
    L.im = L.im/rzeczywista;
}

LZespolona  operator + (LZespolona  Skl1,  LZespolona  Skl2)
{
    LZespolona  Wynik;

    Wynik.re = Skl1.re + Skl2.re;
    Wynik.im = Skl1.im + Skl2.im;
    return Wynik;
}

LZespolona operator - (LZespolona Skl1, LZespolona Skl2)
{
    LZespolona Wynik;

    Wynik.re = Skl1.re - Skl2.re;
    Wynik.im = Skl1.im - Skl2.im;
    return Wynik;
}

LZespolona operator * (LZespolona Skl1, LZespolona Skl2)
{
    LZespolona Wynik;

    Wynik.re = Skl1.re * Skl2.re - Skl1.im * Skl2.im;
    Wynik.im = Skl1.re * Skl2.im + Skl1.im * Skl2.re;
    return Wynik;
}

LZespolona operator / (LZespolona Skl1, LZespolona Skl2)
{
    LZespolona Wynik;
    double wynik_pom;
    Sprzezenie(Skl2);
    Wynik.re = Skl1.re * Skl2.re - Skl1.im * Skl2.im;
    Wynik.im = Skl1.re * Skl2.im + Skl1.im * Skl2.re;
    wynik_pom = Modul(Skl2)*Modul(Skl2);
    DzieleniePrzezRzeczywista(Wynik, wynik_pom);
    return(Wynik);
}

void Wyswietl(LZespolona &Wynik)
{

    cout << "(" << Wynik.re << showpos << Wynik.im << noshowpos << "i)" << endl;
}

void Utworz (LZespolona &L, double re, double im)
{
    L.re = re;
    L.im = im;
}

void Wczytaj (LZespolona &L)
{
    char znak;
    cin >> znak;
    if(znak =='(')
    {
        cin >> L.re >> L.im >> znak;
        if(znak != 'i')
        {
            cout << "Blad wczytywania liczby v2" << endl;
        }
        else
        {
            cin >> znak;
            if(znak!=')')
            {
                cout << "Blad wczytywania liczby v3" << endl;
            }
        }
    }
    else
    {
        cout << "Blad wczytywania liczby v1" << endl;
    }
}
