// 2 losowe liczby
// pokazywal mnozenie
// wynik ma byc wpisany z konsoli: przyklad
    // Podaj wynik mnozenia 3 * 4 = ???
//Sprawdz poprawnosc wpisanego wyniku w przeciwnym przypadku poprosc uzytkownika o ponowne wpoisanie wyniku, przyklad:

// Podaj wynik mnozenia 3 * 4 = 2
// Podaj wynik mnozenia 3 * 4 = 9
// Podaj wynik mnozenia 3 * 4 = 12
// OK, pooprawnie
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int liczba1;
int liczba2;
int main() 
{
    liczba1 = rand() %10+1;
    liczba2 = rand() %10+1;

    cout << "Podaj wynik mnozenia " << liczba1 << " * " << liczba2 << " = ";
}
 