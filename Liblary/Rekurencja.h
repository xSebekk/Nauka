#include <iostream>

using namespace std;

class Rekurencja {
    public: int PoliczRekurencja(int id, int maxId)
    {
        if (id > maxId)
        {
            return id;
        }
        cout << id << endl;
        id++;

        PoliczRekurencja(id,  maxId);
    }

    public: int CiagFibonacciego(int id1, int id2)
    {
        if (id1 == 0 && id2 == 1)
        {
            cout << id1 <<endl;
            cout << id2 <<endl;
        }
        
        if (id1 > 100)
        {
            return id2;
        }
        
        int id = id1 + id2;
        cout << id <<endl;
        CiagFibonacciego(id2, id);
    }
};