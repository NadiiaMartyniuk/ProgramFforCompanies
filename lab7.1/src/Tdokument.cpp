#include "Tdokument.h"
#include <iostream>
#include <iomanip>
using namespace std;
Tdokument::Tdokument()
{
    numer="1537576";
    nazwa="BezNazwy";
    dataDokumentu.dzien=23;
    dataDokumentu.miesiac=12;
    dataDokumentu.rok=2022;
}
Tdokument::Tdokument(string nu, string naz, data d){
    numer=nu;
    nazwa=naz;
    dataDokumentu=d;
}
Tdokument::~Tdokument()
{
    //dtor
}
void Tdokument::wczytaj(){
    cout<<"Numer dokumentu: ";
    cin>>numer;
    cout<<"Nazwa dokumentu: ";
    cin>>nazwa;
    cout<<"Dzien wystawienia ";
    cin>>dataDokumentu.dzien;
    cout<<"Miesiac wystawienia ";
    cin>>dataDokumentu.miesiac;
    cout<<"Rok wystawienia ";
    cin>>dataDokumentu.rok;

}
void Tdokument::wyswietl(){
    cout<<right<<"Nazwa: "<<nazwa<<endl;
    cout<<"Numer dokumenta "<<numer<<endl;
    cout<<"Data "<<setfill('0')<<setw(2)<<dataDokumentu.dzien<<"."<<setw(2)<<dataDokumentu.miesiac<<"."<<setw(4)<<dataDokumentu.rok<<setfill(' ')<<endl;
}
