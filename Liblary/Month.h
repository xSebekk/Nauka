#include <iostream>

using namespace std;

class Month {
    public: string GetMonth(int idMc)
    {
        switch(idMc) {
            case 1: return "styczen";
            case 2: return "luty";
            case 3: return "marzec";
            case 4: return "kwiecien";
            case 5: return "maj";
            case 6: return "czerwiec";
            case 7: return "lipiec";
            case 8: return "sierpien";
            case 9: return "wrzesien";
            case 10: return "pazdziernik";
            case 11: return "listopad";
            case 12: return "grudzien";
            default: return "Nie ma takiego miesiaca";
        }
    }
};