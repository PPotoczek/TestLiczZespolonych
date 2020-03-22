#include<iostream>
#include "WyrazenieZesp.hh"
<<<<<<< HEAD
using std::cin;
using std::cout;
using std::endl;


std::istream & operator >> (std::istream & str, WyrazenieZesp &WyrZ)
{
    char znak;
    str >> WyrZ.Arg1 >> znak >> WyrZ.Arg2;
    switch(znak)
    {
        case '+':
        {
            WyrZ.Op = Op_Dodaj;
            break;
        }
        case '-':
        {
            WyrZ.Op = Op_Odejmij;
            break;
        }
        case '*':
        {
            WyrZ.Op = Op_Mnoz;
            break;
        }
        case '/':
        {
            WyrZ.Op = Op_Dziel;
            break;
        }
    }
}

std::ostream & operator << (std::ostream & str, WyrazenieZesp &WyrZ)
{
    str << WyrZ.Arg1;
    switch(WyrZ.Op)
    {
        case Op_Dodaj:
        {
            str << '+';
            break;
        }
        case Op_Odejmij:
        {
            str << '-';
            break;
        }
        case Op_Mnoz:
        {
            str << '*';
            break;
        }
        case Op_Dziel:
        {
            str << '/';
            break;
        }
    }
    str << WyrZ.Arg2 << endl;
=======
using namespace std;

void Wyswietl(WyrazenieZesp WyrZ)
{
    cout << "(" << WyrZ.Arg1.re << showpos << WyrZ.Arg1.im << noshowpos << "i)" << WyrZ.Op << "(" << WyrZ.Arg2.re << showpos << WyrZ.Arg2.im << noshowpos << "i)" << "=" << endl;
>>>>>>> 3930e29a7a23c20a6df796b3bd0370c6b8c3da97
}

LZespolona Oblicz(WyrazenieZesp  WyrZ)
{
    LZespolona Wynik;
<<<<<<< HEAD
    switch(WyrZ.Op)
    {
        case Op_Dodaj:
        {
            Wynik = WyrZ.Arg1 + WyrZ.Arg2;
            break;
        }
        case Op_Odejmij:
        {
            Wynik = WyrZ.Arg1 - WyrZ.Arg2;
            break;
        }
        case Op_Mnoz:
        {
            Wynik = WyrZ.Arg1 * WyrZ.Arg2;
            break;
        }
        case Op_Dziel:
        {
            Wynik = WyrZ.Arg1 / WyrZ.Arg2;
            break;
        }
    }
    return Wynik;
=======
>>>>>>> 3930e29a7a23c20a6df796b3bd0370c6b8c3da97
}
/*
 * Tu nalezy zdefiniowac funkcje, ktorych zapowiedzi znajduja sie
 * w pliku naglowkowym.
 */
