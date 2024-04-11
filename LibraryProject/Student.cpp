#include "Student.h"
#include <iostream>
#include <string>

using namespace std;

void Student::Student_method() {
    cout << "Un nou student a intrat in librarie!" << endl;
}

Student::Student() {
    cont.setCont();
}

Student::~Student() {
    cout << "Destructor!" << endl;
}
