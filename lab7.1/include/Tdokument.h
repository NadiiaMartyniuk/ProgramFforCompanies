#ifndef TDOKUMENT_H
#define TDOKUMENT_H
#include <iostream>
#include <string>
using namespace std;

struct data{
    int dzien;
    int miesiac;
    int rok;
};

class Tdokument
{
    public:
        Tdokument();
        Tdokument(string nu, string naz, data d);
        void wczytaj();
        void wyswietl();

        virtual ~Tdokument();

    protected:
        string numer;
        string nazwa;
        data dataDokumentu;

    private:
};

#endif // TDOKUMENT_H
