#include <iostream>
#include <fstream>
#include "Hospital.h"

using namespace std;

int main() {
    Hospital hospital;
    hospital.findOldestPatient();

    hospital.appendPatientToFile();
    hospital.appendDoctorToFile();

    hospital.findOldestPatient();

}