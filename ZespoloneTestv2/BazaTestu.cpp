#include <iostream>
#include <cstring>
#include <cassert>
#include "BazaTestu.hh"

using std::cin;
using std::cout;
using std::endl;

static WyrazenieZesp  TestLatwy[] =
        { {{2,1}, Op_Dodaj, {1,2}},
          {{1,0}, Op_Odejmij, {0,1}},
          {{3,0}, Op_Mnoz, {0,3}},
          {{4,8}, Op_Dziel, {1,0}},
        };

static WyrazenieZesp  TestTrudny[] =
        { {{32,56}, Op_Dodaj, {67,23}},
          {{18,7}, Op_Odejmij, {91,15}},
          {{12,7}, Op_Mnoz, {32,5}},
          {{24,12}, Op_Dziel, {2,3}},
        };

void UstawTest( BazaTestu *wskBazaTestu, WyrazenieZesp *wskTabTestu, unsigned int IloscPytan )
{
    wskBazaTestu->wskTabTestu = wskTabTestu;
    wskBazaTestu->IloscPytan = IloscPytan;
    wskBazaTestu->IndeksPytania = 0;
}

bool InicjalizujTest( BazaTestu  *wskBazaTestu, const char *sNazwaTestu )
{
    if (!strcmp(sNazwaTestu,"latwy"))
    {
        UstawTest(wskBazaTestu,TestLatwy,sizeof(TestLatwy)/sizeof(WyrazenieZesp));
        return true;
    }
    if (!strcmp(sNazwaTestu,"trudny"))
    {
        UstawTest(wskBazaTestu,TestTrudny,sizeof(TestTrudny)/sizeof(WyrazenieZesp));
        return true;
    }
    std::cerr << "Otwarcie testu '" << sNazwaTestu << "' nie powiodlo sie." << endl;
    return false;
}


bool PobierzNastpnePytanie( BazaTestu  *wskBazaTestu, WyrazenieZesp *wskWyrazenie )
{
    if (wskBazaTestu->IndeksPytania >= wskBazaTestu->IloscPytan)
    {
        return false;
    }
    *wskWyrazenie = wskBazaTestu->wskTabTestu[wskBazaTestu->IndeksPytania];
    ++wskBazaTestu->IndeksPytania;
    return true;
}

