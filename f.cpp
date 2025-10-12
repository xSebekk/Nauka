#include <iostream>
#include "Liblary/Prostokat.h"
#include "Liblary/Rekurencja.h"
#include "Liblary/Trojkat.h"

using namespace std;

int main()
{

    int szerokosc = 12;
    int wysokosc = 6;

    Prostokat prostokat;
    Rekurencja rekurencja;
    Trojkat trojkat;
    
    //rekurencja.PoliczRekurencja(4, 22);
    //rekurencja.CiagFibonacciego(0, 1);
    //prostokat.Pelny(wysokosc, szerokosc);
    //cout << endl;
    //cout << endl;
    //prostokat.Pusty(wysokosc, szerokosc);

    //cout << endl;
    //cout << endl;
    //prostokat.Przekatna(wysokosc);

    //cout << endl;
    //cout << endl;
    //prostokat.PrzekatnaOdwrotna(wysokosc);

    trojkat.Pelny(wysokosc);

    return 0;
}