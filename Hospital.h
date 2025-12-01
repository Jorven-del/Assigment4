//============================================================================
// Names       : -
// Assignment  : 4
// File        : Hospital.h
//============================================================================

#ifndef ASSIGMENT4_HOSPITAL_H
#define ASSIGMENT4_HOSPITAL_H
#include <iostream>
#include "Patient.h"
#include <vector>
#include <fstream>
#include "Doctor.h"

class Hospital {

public:
    // Constructor
    Hospital();

    // Destructor
    ~Hospital();

    // Member Functions
    void Find_Oldest_Patient() const;
    int Count_Critical_Patients() const;
    int Count_In_Patients() const;
    void Doctors_By_Specialty(string speciality);
    void Show_Patient_by_ID(long int patientID);
    void Show_Doctor_by_ID(long int doctorID);
    void Show_Assigned_Doctor(long int patientID);
    void Show_Assigned_Patients(long int doctorID);
    void Append_Patient_To_File();
    void Append_Doctor_To_File();

private:
    // Attributes
    vector<Patient> *ptrPatients;
    vector<Doctor> *ptrDoctors;

};


#endif