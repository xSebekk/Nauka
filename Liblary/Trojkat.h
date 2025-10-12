#include <iostream>

using namespace std;

class Trojkat
{
    public: void Pelny(int wysokosc)
    {
        int wys = wysokosc;
        int szer = (wysokosc * 2) + 1;        
        for (int i = 0; i < wysokosc; i++)
        {
            for (int j = 0; j < szer; j++)
            {
                if(j >= wysokosc - i && j <= wysokosc + i)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            cout <<endl;
        }
    }   
};