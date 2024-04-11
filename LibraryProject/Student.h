#pragma once
#include <string>
#include "InfoSecuritate.h"
#include "Cititori.h"
#include "Librarie.h"

using namespace std;

class Student : public Cititori {
private:
    InfoSecuritate cont; // Definirea membrului cont aici
public:
    string NumeStudent;
    int CartiImprumutate;

    void Student_method();

    Student();
    ~Student();
    string getTitlu() {
        return Cititori::getTitlu();
    }
};
