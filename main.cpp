#include <iostream>
using namespace std;

int main()
{
    float posti, adulti, bambini;
    posti = 0;
    bambini = 0;
    adulti = 0;
    while (posti<30)
    {
        cout << "quanti adulti salgono?" << endl;
        cin >> adulti;
        cout << "quanti bambini salgono?" << endl;
        cin >> bambini;
        posti = posti+adulti;
        posti = posti + (bambini/2);
    }
    if (posti ==30)
    {
        cout << "la giostra è al completo" << endl;
    }
    else
    {
        cout << "vanno liberati " << posti-30 << " posti" << endl;
    }
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
