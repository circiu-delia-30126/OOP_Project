#pragma once
#include <string>
#include "InfoSecuritate.h"
#include "Librarie.h"

using namespace std;

class Cititori : public Librarie {
protected:
    int CodCititor;
public:
    int NoiCititori;
    bool MembruActiv;
    void Cititori_method();
    void printInfo(); 

    Cititori();
    ~Cititori();
};
