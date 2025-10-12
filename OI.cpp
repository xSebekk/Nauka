#include <iostream>
#include "Liblary/Month.h"

using namespace std;

int main ()
{
    Month month;
    int idMc = 0;
    cout << "Podaj numer mc : ";
    cin >> idMc;

    string mc = month.GetMonth(idMc);

    cout<< "Wynik miesiaca to = "<< mc;
    return 0;
}


