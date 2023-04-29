#include "Ttowar.h"
#include <iostream>
#include<string>
#include <iomanip>
using namespace std;
Ttowar::Ttowar()
{
    kod="9566";
    nazwa="mleko";
    cena=3.75;
    ilosc=3;
}
Ttowar::Ttowar(string k, string n, float c, int i){
    kod=k;
    nazwa=n;
    cena=c;
    ilosc=i;
}
Ttowar::~Ttowar()
{
    //dtor
}
void Ttowar::wczytaj(){
    cout<<"Nazwa towaru ";
    cin>>nazwa;
    cout<<"Kod towaru ";
    cin>>kod;
    cout<<"Cena ";
    cin>>cena;
    cout<<"Ilosc ";
    cin>>ilosc;
}
void Ttowar::wyswietl(){
    cout<<setw(10)<<nazwa<<"|"<<setw(10)<<kod<<"|"<<setw(10)<<cena<<"|"<<setw(10)<<ilosc<<"|"<<setw(13)<<oblicz()<<endl;;
}
float Ttowar::oblicz(){
    return ilosc*cena;
}
