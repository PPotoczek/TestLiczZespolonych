#include<iostream>
#include "WyrazenieZesp.hh"
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

std::ostream & operator << (std::ostream & str, WyrazenieZesp WyrZ)
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
}

LZespolona Oblicz(WyrazenieZesp  WyrZ)
{
    LZespolona Wynik;
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
            break;;
        }
    }
    return Wynik;
}

