#include "Librarie.h"
#include "InfoSecuritate.h"
#include "Cititori.h"

#include <iostream>
#include <string>


using namespace std;

void Librarie::setNrPagini(int NrPagini)
{
	this->NrPagini = NrPagini;
}
int Librarie::getNrPagini()
{
	return this->NrPagini;
}

void Librarie::setStocCarti(int StocCarti)
{
	this->StocCarti = StocCarti;
}
int Librarie::getStocCarti()
{
	return this->StocCarti;
}

void Librarie::setCod(int Cod)
{
	this->Cod = Cod;
}
int Librarie::getCod()
{
	return this->Cod;
}

void Librarie::setNumeAutor(string NumeAutor)
{
	this->NumeAutor = NumeAutor;
}
string Librarie::getNumeAutor()
{
	return this->NumeAutor;
}

void Librarie::setTitlu(string Titlu)
{
	this->Titlu = Titlu;
}
string Librarie::getTitlu()
{
	return this->Titlu;
}

void Librarie::ContProtejat()
{
	cont.setCont();
}
