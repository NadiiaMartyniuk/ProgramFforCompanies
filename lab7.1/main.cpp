#include <iostream>
#include "Ttowar.h"
#include "Tdokument.h"
#include "Tfaktura.h"
#include "Tklient.h"
using namespace std;

int main()
{
    Ttowar towar;
    Tklient klient;
    klient.wczytaj();
    int ilosc;
    cout<<"Jaka ilosc towarow ? ";
    cin>>ilosc;
    Tfaktura faktura(&klient, &towar, ilosc);
    faktura.wczytaj();
    cout<<endl;
    faktura.wyswietl();
    return 0;
}
