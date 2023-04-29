#include "Tklient.h"
#include <iostream>
#include<iomanip>
using namespace std;
Tklient::Tklient()
{
    imie="Nadiia";
    nazwisko="Martyniuk";
    nip="99845";
}
Tklient::Tklient(string i, string n, string ni){
    imie=i;
    nazwisko=n;
    nip=ni;
}
Tklient::~Tklient()
{
    //dtor
}
void Tklient::wczytaj(){
    cout<<"Imie klienta ";
    cin>>imie;
    cout<<"Nazwisko klienta ";
    cin>>nazwisko;
    cout<<"NIP klienta ";
    cin>>nip;
}
void Tklient::wyswietl(){
    cout<<imie<<" "<<nazwisko<<" "<<setw(10)<<" NIP: "<<nip<<endl;
}
