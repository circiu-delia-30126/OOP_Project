#pragma once
#include <string>
#include "InfoSecuritate.h"

using namespace std;

class Librarie {
private:
    int NrPagini;
    int StocCarti;
    int Cod;
    string NumeAutor;
    string Titlu;
protected:
    string AdresaCladire;
    int CodCladire;
public:
    int TotalCarti;
    int CartiImprumutate;
    InfoSecuritate cont;

    void ContProtejat();

    void setNrPagini(int);
    int getNrPagini();

    void setStocCarti(int);
    int getStocCarti();

    void setCod(int);
    int getCod();

    void setNumeAutor(string);
    string getNumeAutor();

    void setTitlu(string);
    string getTitlu();

    static int getNumarCarti();

     //Constructori și destructori
     //Librarie();
     //Librarie(int NrPagini);
     //Librarie(int NrPagini, int StocCarti);
     //Librarie(int NrPagini, int StocCarti, int Cod);
     //Librarie(int NrPagini, int StocCarti, int Cod, string Titlu);
     //~Librarie();
};
