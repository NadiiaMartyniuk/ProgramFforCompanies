#ifndef TKLIENT_H
#define TKLIENT_H
#include <iostream>
#include <string>
using namespace std;

class Tklient
{
    public:
        Tklient();
        Tklient(string i, string n, string ni);
        void wczytaj();
        void wyswietl();
        virtual ~Tklient();

    protected:
        string imie;
        string nazwisko;
        string nip;


    private:
};

#endif // TKLIENT_H
