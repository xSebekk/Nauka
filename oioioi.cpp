#include <iostream>
#include <string>

using namespace std;

int main ()
{
    string nazwa = "";

    cout << "napisz cos: ";
    cin >> nazwa;

    for (int i = 0; i < nazwa.length(); i++)
    {
        cout << nazwa[i] <<endl;
    }

    return 0;
}

