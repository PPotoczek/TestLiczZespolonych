#include<iostream>
#include "WyrazenieZesp.hh"
using namespace std;

void Wyswietl(WyrazenieZesp WyrZ)
{
    cout << "(" << WyrZ.Arg1.re << showpos << WyrZ.Arg1.im << noshowpos << "i)" << WyrZ.Op << "(" << WyrZ.Arg2.re << showpos << WyrZ.Arg2.im << noshowpos << "i)" << "=" << endl;
}

LZespolona Oblicz(WyrazenieZesp  WyrZ)
{
    LZespolona Wynik;
}
/*
 * Tu nalezy zdefiniowac funkcje, ktorych zapowiedzi znajduja sie
 * w pliku naglowkowym.
 */
