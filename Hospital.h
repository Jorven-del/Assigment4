#ifndef ASSIGMENT4_HOSPITAL_H
#define ASSIGMENT4_HOSPITAL_H
#include <iostream>
#include "Patient.h"
#include <fstream>
#include "Doctor.h"

class Hospital {
    public:
    Hospital();

    void findOldestPatient();
    int countCriticalPatients();
    int countInPatients();
    void doctorsBySpeciality(string searchedSpeciality);
    void showPatientByID(long int patientID);
    void showDoctorByID(long int doctorID);
    string showAssignedDoctor(long int patientID);
    void showAssignedPatients(long int doctorID);
    void appendPatientToFile();
    void appendDoctorToFile();

    private:
    vector<Patient>* pointerPatients;
    vector<Doctor>* pointerDoctors;
};


#endif