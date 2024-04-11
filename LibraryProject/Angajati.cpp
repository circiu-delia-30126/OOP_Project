#include "Angajati.h"
#include <iostream>

using namespace std;

void Angajati::Angajati_method() {
    cout << "Un nou angajat a intrat in librarie!" << endl;
}

Angajati::Angajati() {
    cont.setCont(); 
}

Angajati::~Angajati() {
    cout << "Destructor for Angajati!" << endl;
}
