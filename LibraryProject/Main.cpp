#include <iostream>
#include <string>
#include "Librarie.h"
#include "InfoSecuritate.h"
#include "Cititori.h"
#include "Angajati.h"
#include "Student.h"

using namespace std;

int main() {
    Librarie Cartea1;
    Librarie* Cartea2 = new Librarie;

    Cartea1.setNrPagini(356);
    Cartea1.setStocCarti(5789);
    Cartea1.setCod(75655467);
    Cartea1.setNumeAutor("Mircea Eliade");
    Cartea1.setTitlu("Maitreyi");

    Cartea2->setNrPagini(341);
    Cartea2->setStocCarti(225);
    Cartea2->setCod(123456);
    Cartea2->setNumeAutor("George Calinescu");
    Cartea2->setTitlu("Enigma Otiliei");

    cout << "Prima carte este scrisa de " << Cartea1.getNumeAutor() << " si se intituleaza " << Cartea1.getTitlu() << " cu " << Cartea1.getNrPagini() << " pagini si codul " << Cartea1.getCod() << "." << endl << "Numarul cartilor disponibile :" << Cartea1.getStocCarti() << endl;
    cout << "A doua carte este scrisa de " << Cartea2->getNumeAutor() << " si se intituleaza " << Cartea2->getTitlu() << " cu " << Cartea2->getNrPagini() << " pagini si codul " << Cartea2->getCod() << "." << endl << "Numarul cartilor disponibile :" << Cartea2->getStocCarti() << endl;
    cout << endl << endl;

    InfoSecuritate Account;
    Account.setCont();

    Librarie Account2;
    Account2.ContProtejat();

    Cititori Account3;
    Account3.ContProtejat();
    Account3.Cititori_method();

    Angajati Account4;
    Account4.ContProtejat();
    Account4.Angajati_method();

    Student Account5;
    Account5.ContProtejat();
    Account5.Student_method();

    return 0;
}
