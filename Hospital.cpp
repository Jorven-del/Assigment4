#include "Hospital.h"
#include <iostream>
using namespace std;

Hospital::Hospital() {
    pointerPatients = new vector<Patient>;
    pointerDoctors = new vector<Doctor>;

    ifstream patientFile ("patients.txt");
    int numberOfPatients;
    patientFile >> numberOfPatients;

    for (int i = 0; i < numberOfPatients ; i++) {
        string firstName;
        string lastName;
        long int id;
        long int doctor;
        string birthday;
        string bloodType;
        string diagn;
        string admissionDate;
        string dischargeDate;

        patientFile >> firstName >> lastName >> id >> doctor >> birthday >> bloodType >> diagn >> admissionDate >> dischargeDate;

        Patient patient;
        patient.set_firstName(firstName);
        patient.set_lastName(lastName);
        patient.set_id(id);
        patient.set_doctor(doctor);
        patient.set_birthday(birthday);
        patient.set_bloodType(bloodType);
        patient.set_diagn(diagn);
        patient.set_admissionDate(admissionDate);
        patient.set_dischargeDate(dischargeDate);

        pointerPatients->push_back(patient);
    }


    ifstream doctorFile ("doctors.txt");
    int numberOfDoctors;
    doctorFile >> numberOfDoctors;


    for (int i = 0; i < numberOfDoctors; i++) {
        string firstName;
        string lastName;
        long int id;
        string specialty;
        int yearsExperience;
        long double baseSalary;
        long double performanceBonus;

        doctorFile >> firstName >> lastName >> id >> specialty >> yearsExperience >> baseSalary >> performanceBonus;
        Doctor doctor;
        doctor.set_firstName(firstName);
        doctor.set_lastName(lastName);
        doctor.set_id(id);
        doctor.set_specialty(specialty);
        doctor.set_yearsExperience(yearsExperience);
        doctor.set_baseSalary(baseSalary);
        doctor.set_performanceBonus(performanceBonus);

        pointerDoctors->push_back(doctor);
    }
}

void findOldestPatient() {

}


int countCriticalPatients();
int countInPatients();
void doctorsBySpeciality(string searchedSpeciality);
void showPatientByID(long int patientID);
void showDoctorByID(long int doctorID);
string showAssignedDoctor(long int patientID);
void showAssignedPatients(long int doctorID);
void appendPatientToFile();
void appendDoctorToFile();
