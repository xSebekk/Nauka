#include <iostream>

using namespace std;
int main ()
{
    string text;
    int liczbaZ = 0; 
    int liczbaA = 0;  

    cout << "napisz cos:  ";
    cin >> text;
    if (text.length() == 0)
    {
        cout << "Nie podales zadnego tekstu";
        return 0;
    }

    for (int i = 0; i < text.length(); i++)
    {
       //cout << "Liczba i = "<< i <<"| litera = "<<text[i] << endl;
        if (text[i] == 'z' || text[i] == 'Z')
        {
            liczbaZ++;
        }

        if (text[i] == 'a' || text[i] == 'A')
        {
            liczbaA++;
        }
    }

    cout << "Znalazlem liter z: " << liczbaZ <<endl;
    cout << "Znalazlem liter a: " << liczbaA <<endl;

//&& -> __and_
//|| -> __or_


    //int liczby[5] = {1,2,3,4,5};
    //char nazwa[5] = {'a','g','a','t','a'};
    //string imie = "agata";

    //cout << nazwa[3];
    //cout << imie[3];

    return 0;
}
