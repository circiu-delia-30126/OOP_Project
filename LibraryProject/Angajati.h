#pragma once

#include <string>
#include "Librarie.h"

using namespace std;

class Angajati :
    public Librarie
{
public:
    int AngajatiNoi;
    bool AngajatiActivi;

    void Angajati_method();

    Angajati();
    ~Angajati();

};
