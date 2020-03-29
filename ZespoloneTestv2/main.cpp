#include <iostream>
#include "BazaTestu.hh"
#include "Statystyki.hh"

using namespace std;

int main(int argc, char **argv)
{

    if (argc < 2) {
        cout << endl;
        cout << " Brak opcji okreslajacej rodzaj testu." << endl;
        cout << " Dopuszczalne nazwy to:  latwy, trudny." << endl;
        cout << endl;
        return 1;
    }

    BazaTestu   BazaT = { nullptr, 0, 0 };

    if (InicjalizujTest(&BazaT, argv[1]) == false)
    {
        cerr << " Inicjalizacja testu nie powiodla sie." << endl;
        return 1;
    }



    cout << endl;
    cout << " Start testu arytmetyki zespolonej: " << argv[1] << endl;
    cout << endl;


    WyrazenieZesp Pytanie;
    LZespolona Wynik;
    LZespolona Odpowiedz;
    Statystyki Staty;
    Zeruj(Staty);
    int proby=3;
    while (PobierzNastpnePytanie(&BazaT,&Pytanie))
    {
        cout << "Podaj Wynik Operacji:" << Pytanie;
        Wynik = Oblicz(Pytanie);
        cin >> Odpowiedz;
        while(!cin.good() && proby>0)
        {
            cout << "Blad zapisu sprobuj jeszcze raz. Pozostale proby: " << proby << endl;
            cin.clear();
            cin.ignore(200,'\n');
            cin >> Odpowiedz;
            proby--;
        }
        if(Wynik == Odpowiedz)
        {
            cout << "Dobra Odpowiedz !" << endl;
            Dodaj_popr(Staty);
        }
        else
        {
            cout << "Zla odpowiedz !" << endl;
            cout << "Poprawna odpowiedz to: " << Wynik << endl;
            Dodaj_wszystkie(Staty);
        }
        proby=3;
        cin.clear();
    }

    cout << endl;
    cout << "Twoje statystyki :\n" << "Ilosc dobrych odpowiedzi: " << Staty.poprawne << endl;
    cout <<"Ilosc blednych odpowiedzi: " << Niepoprawne(Staty) << endl << "Wynik procentowy poprawnych odpowiedzi: " << Procent_popr_odp(Staty) << "%";
    cout << endl;
    cout << "Koniec testu" << endl;
    cout << endl;
}