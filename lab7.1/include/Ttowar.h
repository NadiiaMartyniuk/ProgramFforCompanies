#ifndef TTOWAR_H
#define TTOWAR_H
#include <iostream>
#include<string>
using namespace std;

class Ttowar
{
    public:
        Ttowar();
        Ttowar(string k, string n, float c, int i);
        void wczytaj();
        void wyswietl();
        float oblicz();
        virtual ~Ttowar();

    protected:
        string kod;
        string nazwa;
        float cena;
        int ilosc;


    private:
};

#endif // TTOWAR_H
