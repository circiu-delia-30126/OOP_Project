#include "Cititori.h"
#include <iostream>

using namespace std;

void Cititori::Cititori_method() {
    cout << "Un nou cititor a intrat in librarie!" << endl;
}

Cititori::Cititori() {
    Librarie::cont.setCont();
    NoiCititori++;
    MembruActiv = true;
}

Cititori::~Cititori() {
    cout << "Destructor for Cititori!" << endl;
}

void Cititori::printInfo() {
    cout << "Cod cititor: " << CodCititor << endl;
    cout << "Numar total de cititori: " << NoiCititori << endl;
    cout << "Membru activ: " << (MembruActiv ? "Da" : "Nu") << endl;

    cout << "Titlu: " << getTitlu() << endl;
}
