#include <iostream>
#include<math.h>
#include "LZespolona.hh"
<<<<<<< HEAD
using std::cout;
using std::cin;
using std::endl;
=======
using namespace std;
>>>>>>> 3930e29a7a23c20a6df796b3bd0370c6b8c3da97

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

<<<<<<< HEAD
std::ostream & operator << (std::ostream & str, LZespolona &Wynik)
{

    str << "(" << Wynik.re << std::showpos << Wynik.im << std::noshowpos << "i)";
=======
void Wyswietl(LZespolona &Wynik)
{

    cout << "(" << Wynik.re << showpos << Wynik.im << noshowpos << "i)" << endl;
>>>>>>> 3930e29a7a23c20a6df796b3bd0370c6b8c3da97
}

void Utworz (LZespolona &L, double re, double im)
{
    L.re = re;
    L.im = im;
}

<<<<<<< HEAD
std::istream & operator >> (std::istream & str, LZespolona &L)
{
    char znak;
    str >> znak;
    if(znak =='(')
    {
        str >> L.re;
        str >> L.im;
        str >> znak;
        if(znak != 'i')
        {
            str.setstate(std::ios::failbit);
        }
        else
        {
            str >> znak;
            if(znak!=')')
            {
                str.setstate(std::ios::failbit);
            }
            else
            {
             return str;
=======
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
>>>>>>> 3930e29a7a23c20a6df796b3bd0370c6b8c3da97
            }
        }
    }
    else
    {
<<<<<<< HEAD
        str.setstate(std::ios::failbit);
    }
}
=======
        cout << "Blad wczytywania liczby v1" << endl;
    }
}
>>>>>>> 3930e29a7a23c20a6df796b3bd0370c6b8c3da97
