#include <iostream>
#include <unistd.h>
using namespace std;

void Dodawanie(int a, int b)
{
    cout << "Wynikn dodawania liczby "<<a << " z liczba "<<b <<" = " << a+b;
}

void Odejmowanie(int a, int b)
{
    cout << "Wynikn odejmowania liczby "<<b << " z liczba "<<a <<" = " << b-a;
}

void Mnozenie(int a, int b)
{
    cout << "Wynikn mnozenia liczby "<<a << " z liczba "<<b <<" = " << a*b;
}

void Dzielenie(int a, int b)
{
    if(b == 0)
    {
        cout << "Nie mozna dzieliec przez ZERO !!!!";
    }
    cout << "Wynikn dzielenia liczby "<<a << " z liczba "<<b <<" = " << a/b;
}

int main ()
{
    int operacja = 0;
    do
    {
        int liczba1 = 0;
        int liczba2 = 0;

        cout << endl;
        cout << "------------------ KALKULATOR ------------------" << endl;

        cout << "Wybierz operacje od 1 do 4 ->" << endl;
        cout << "1 - Dodawanie" << endl;
        cout << "2 - Odejmowanie" << endl;
        cout << "3 - Mnozenie" << endl;
        cout << "4 - Dzielenie" << endl;
        cout << "5 - KONIEC" << endl;

        cout << "Podaj jaka chcesz zrobic operacje : "; cin>> operacja;

        if (operacja != 5)
        {
            cout <<endl << "Podaj 1 liczbe : "; cin >> liczba1;
            cout << "Podaj 2 liczbe : "; cin >> liczba2;
        }

        switch(operacja)
        {
            case 1 :
                Dodawanie(liczba1, liczba2);
                break;
            case 2 :
                Odejmowanie(liczba1, liczba2);
                break;
            case 3 :
                Mnozenie(liczba1, liczba2);
                break;
            case 4 :
                Dzielenie(liczba1, liczba2);
                break;
            case 5 :
                return 0;
        }   
    } while (operacja != 5);
}