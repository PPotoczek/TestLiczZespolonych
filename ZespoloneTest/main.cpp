#include <iostream>
#include "BazaTestu.hh"
<<<<<<< HEAD
#include "Statystyki.hh"
=======
>>>>>>> 3930e29a7a23c20a6df796b3bd0370c6b8c3da97

using namespace std;




int main(int argc, char **argv)
{
 /*
    if (argc < 2) {
        cout << endl;
        cout << " Brak opcji okreslajacej rodzaj testu." << endl;
        cout << " Dopuszczalne nazwy to:  latwy, trudny." << endl;
        cout << endl;
        return 1;
    }


    BazaTestu   BazaT = { nullptr, 0, 0 };

    if (InicjalizujTest(&BazaT,argv[1]) == false) {
        cerr << " Inicjalizacja testu nie powiodla sie." << endl;
        return 1;
    }



    cout << endl;
    cout << " Start testu arytmetyki zespolonej: " << argv[1] << endl;
    cout << endl;

    WyrazenieZesp   WyrZ_PytanieTestowe;

    while (PobierzNastpnePytanie(&BazaT,&WyrZ_PytanieTestowe)) {
        cout << " Czesc rzeczywista pierwszego argumentu: ";
        cout << WyrZ_PytanieTestowe.Arg1.re << endl;
    }


    cout << endl;
    cout << " Koniec testu" << endl;
    cout << endl;
*/
<<<<<<< HEAD

 /*
  * Sprawdzam czy statystyki dzialaja
  *
 Statystyki Staty;
 Staty.poprawne = 14;
 Staty.wszystkie = 20;
 int a,b;
 dodaj_popr(Staty);
 dodaj_wszystkie(Staty);
 a = Niepoprawne(Staty);
 b = Procent_popr_odp(Staty);
 cout << Staty.poprawne << " " << Staty.wszystkie << endl;
 cout << a << endl;
 cout << b << '%' << endl;

 */

 LZespolona L1;
 LZespolona L2;
 WyrazenieZesp WyrZ;
 cin >> WyrZ;
 if(!cin.good())
 {
     cin.clear();
     cout << "zle" << endl;
 }
 cout << WyrZ << endl;
 L1 = Oblicz(WyrZ);
 cout << L1;
=======
 double a=0;
 LZespolona L1;
 LZespolona L2;
 LZespolona L3;
 Wczytaj(L1);
 Wczytaj (L2);
 L3 = L1*L2;
 Wyswietl(L3);
 Sprzezenie(L1);
 Wyswietl(L1);
 a = Modul(L1);
 cout << a;

>>>>>>> 3930e29a7a23c20a6df796b3bd0370c6b8c3da97
}