#include <iostream>
#include <cstdlib>   // rand(), srand()
#include <ctime>     // time()

using namespace std;

int main() {
    srand(time(0));

    
    int a, b;
    int odpowiedz;
   

    cout << "test tabliczka mnozenia" << endl;

    while (true) {
        a = rand() % 10 + 1;
        b = rand() % 10 + 1;

        while (true) {
            cout << "Ile to jest: " << a << " * " << b << " = ";
            cin >> odpowiedz;
        }

        if (odpowiedz == a * b) {
            cout << "Poprawna odpowiedz" << endl;
            break;
        } else {
            cout << "Niestety, sprobuj jeszcze raz. ";
        }
    }


    return 0;
}
