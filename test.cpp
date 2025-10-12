#include <iostream>
#include <cstdlib>   // rand(), srand()
#include <ctime>     // time()

using namespace std;

int main() 
{
    srand(time(0));

    int a, b;
    int odpowiedz;

    cout << "=== Test tabliczki mnozenia ===" << endl;
    cout << "Wpisz -1 aby zakonczyc" << endl;

    while (true)
    {
        a = rand() % 10 + 1;
        b = rand() % 10 + 1;
        bool isOk = false;

        do
        {
            cout << "Ile to jest: " << a << " * " << b << " = ";
            cin >> odpowiedz;

            if (odpowiedz == -1)
            {
                cout << "Koniec"<< endl;
                return 0;
            }

            if (odpowiedz == a * b)
            {
                isOk = false;
                cout << "Poprawna odpowiedz" << endl;
            }
            else
            {
                isOk = true;
                cout << "sprobuj jeszcze raz  " << endl;
            }
        } while (isOk);
    }

    return 0;
}