#include <iostream>
using namespace std;

int main ()
{
    char operacja;
    int a, b;
    cout << "kalkulator" << endl;
    cout << "Wprowadź operację (+ - * /): ";
    cin >> operacja;

    cout << "Wprowadź dwie liczby: ";
    cin >> a >> b;
    
    switch(operacja)
    {
        case '+': cout << a + b;break;    
        case '-': cout << a - b;break;
        case '*': cout << a * b;break;
        case '/':
            if (b != 0)
            {
                cout << a / b;
            }
            else
            {
                cout << "Błąd: dzielenie przez 0";
            }
            break;
        default: cout << "niepoprawny operator";
    }
}