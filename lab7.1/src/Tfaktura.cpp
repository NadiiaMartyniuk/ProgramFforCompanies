#include "Tfaktura.h"
#include "Ttowar.h"
#include "Tklient.h"
#include <iostream>
#include <iomanip>
using namespace std;

Tfaktura::Tfaktura(Tklient *k ,Ttowar *t, int l){
    klient=k;
    liczbaPoz=l;
    towar = new Ttowar[l];
    for (int i=0; i<l; i++){
        towar[i]=Ttowar();
        towar[i].wczytaj();

    }


}
Tfaktura::~Tfaktura()
{
    delete [] towar;
}
void Tfaktura::wczytaj(){
    Tdokument dokument;
    Tdokument::wczytaj();
}
void Tfaktura::wyswietl(){
    Tdokument::wyswietl();
    klient->wyswietl();
    cout<<setw(10)<<"Nazwa "<<"|"<<setw(10)<<" Kod "<<"|"<<setw(10)<<" Cena: "<<"|"<<setw(10)<<" Ilosc "<<"|"<<" Cena koncowa "<<endl;
    for (int i=0; i<liczbaPoz; i++){
        towar[i].wyswietl();
    }
    cout<<endl<<right<<"Suma koncowa = "<<suma()<<endl;
}
float Tfaktura::suma(){
    float s;
    s=0;
    for (int i=0; i<liczbaPoz; i++){
        s += towar[i].oblicz();
    }
    return s;
}
