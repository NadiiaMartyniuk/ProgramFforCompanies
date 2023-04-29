#ifndef TFAKTURA_H
#define TFAKTURA_H
#include "Tfaktura.h"
#include "Tklient.h"
#include "Tdokument.h"
#include "Ttowar.h"
#include <iostream>
using namespace std;

class Tfaktura : public Tdokument
{
    public:
        Tfaktura(Tklient *k, Ttowar *t, int l);
        void wczytaj();
        void wyswietl();
        float suma();
        virtual ~Tfaktura();

    protected:
        Tklient *klient;
        Ttowar *towar;
        int liczbaPoz;


    private:
};

#endif // TFAKTURA_H
