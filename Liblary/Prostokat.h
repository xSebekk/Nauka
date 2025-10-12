#include <iostream>

using namespace std;

class Prostokat
{
    public: void Pelny(int wysokosc, int szerokosc)
    {
        cout << endl;
        for (int i = 0; i < wysokosc; i++)
        {
            for (int j = 0; j < szerokosc; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }   

    public: void Pusty(int wysokosc, int szerokosc)
    {
        cout << endl;
        for (int i = 0; i < wysokosc; i++)
        {
            for (int j = 0; j < szerokosc; j++)
            {
                if (i == 0 || i == wysokosc - 1)
                {
                    cout << "*";
                }
                else
                {
                    if (j == 0 || j == szerokosc - 1)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
            }
            cout << endl;
        } 
    }

    public: void Przekatna(int wysokosc)
    {
        cout << endl;
        for (int i = 0; i < wysokosc; i++)
        {
            for (int j = 0; j < wysokosc; j++)
            {
               if (i == 0 || i == wysokosc - 1)
                {
                    cout << "*";
                }
                else
                {
                    if (j == 0 || j == wysokosc - 1)
                    {
                        cout << "*";
                    }
                    else if (i == j)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
            }
            cout << endl;
        } 
    }

    public: void PrzekatnaOdwrotna(int wysokosc)
    {
        cout << endl;
        for (int i = 0; i < wysokosc; i++)
        {
            for (int j = 0; j < wysokosc; j++)
            {
               if (i == 0 || i == wysokosc - 1)
                {
                    cout << "*";
                }
                else
                {
                    if (j == 0 || j == wysokosc - 1)
                    {
                        cout << "*";
                    }
                    else if (i == wysokosc - 1 - j)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
            }
            cout << endl;
        } 
    }
};