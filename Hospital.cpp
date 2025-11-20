#include "Hospital.h"
#include <iostream>
using namespace std;

Hospital::Hospital() {
    pointerPatients = new vector<Patient>;
    pointerDoctors = new vector<Doctor>;

    ifstream patientFile ("Patients.txt");

    int numberOfPatients;
    patientFile >> numberOfPatients;

    for (int i = 1; i <= numberOfPatients ; i++) {
        string firstName;
        string lastName;
        long int id;
        long int doctor;
        string birthday;
        string bloodType;
        string diagn;
        string admissionDate;
        string dischargeDate;

        patientFile >> firstName >> lastName >> id >> doctor >> birthday >> bloodType;

        patientFile >> ws;
        patientFile.ignore(1);
        getline(patientFile, diagn, '"');

        patientFile >> admissionDate >> dischargeDate;

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


    ifstream doctorFile ("Doctors.txt");
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

void Hospital::findOldestPatient() {
    int oldestPatient;
    long int brthday = 99999999;
    for (int i = 0; i < pointerPatients->size(); i++) {
        if (stol((*pointerPatients)[i].get_birthday()) < brthday) {
            brthday = stol((*pointerPatients)[i].get_birthday());
            oldestPatient = i;
        }
    }
    (*pointerPatients)[oldestPatient].Print_Patient_Info();
}


int Hospital::countCriticalPatients() {
    int counter = 0;
    for (int i = 0; i < pointerPatients->size(); i++) {
        if ((*pointerPatients)[i].Patient_Status() == "Critical") {
            counter += 1;
        }
    }
    return counter;
}

int Hospital::countInPatients() {
    return pointerPatients->size();
}

void Hospital::doctorsBySpeciality(string searchedSpeciality) {
    for (int i = 0; i < pointerDoctors->size(); i++) {
        if ((*pointerDoctors)[i].get_specialty() == searchedSpeciality) {
            cout << (*pointerDoctors)[i].get_firstName() << " " << (*pointerDoctors)[i].get_lastName() << endl;
        }
    }
}


void Hospital::showPatientByID(long int patientID) {
    for (int i = 0; i < pointerPatients->size(); i++) {
        if ((*pointerPatients)[i].get_id() == patientID) {
            (*pointerPatients)[i].Print_Patient_Info();
            return;
        }
    }
    cout << "No patient found";
}


void Hospital::showDoctorByID(long int doctorID) {
    for (int i = 0; i < pointerDoctors->size(); i++) {
        if ((*pointerDoctors)[i].get_id() == doctorID) {
            (*pointerDoctors)[i].Print_Doctor_Info();
            return;
        }
    }
    cout << "No doctor found";
}

string Hospital::showAssignedDoctor(long int patientID) {
    for (int i = 0; i < pointerPatients->size(); i++) {
        if ((*pointerPatients)[i].get_id() == patientID) {
            int doctorID = (*pointerPatients)[i].get_doctor();
            for (int j = 0; j < pointerDoctors->size(); j++) {
                if ((*pointerDoctors)[j].get_id() == doctorID) {
                    return (*pointerDoctors)[j].get_firstName() + " " + (*pointerDoctors)[j].get_lastName();
                }
            }
        }
    }
}


void Hospital::showAssignedPatients(long int doctorID) {
    for (int i = 0; i < pointerPatients->size(); i++) {
        if ((*pointerPatients)[i].get_doctor() == doctorID) {
            cout << (*pointerPatients)[i].get_firstName() << " " << (*pointerPatients)[i].get_lastName() << endl;
        }
    }
}

void Hospital::appendPatientToFile() {
    string firstName;
    string lastName;
    long int id;
    long int doctor;
    string birthday;
    string bloodType;
    string diagn;
    string admissionDate;
    string dischargeDate;

    cout << "First Name: ";
    cin >> firstName;
    cout << endl << "Last Name: ";
    cin >> lastName;
    cout << endl << "ID: ";
    cin >> id;
    cout << endl << "Assigned Doctor: ";
    cin >> doctor;
    cout << endl << "Date of Birth: ";
    cin >> birthday;
    cout << endl << "Blood Type: ";
    cin >> bloodType;
    cout << endl << "Diagnosis: ";
    getline(cin,diagn);
    cout << endl << "Date of Admission: ";
    cin >> admissionDate;
    cout << endl << "Discharge Date: ";
    cin >> dischargeDate;

    ofstream patientFile ("Patients.txt");
    patientFile << "\n" << firstName << " " << lastName << " " << id << " " << doctor << " " << birthday << " "
 << bloodType << " " << diagn << " " << admissionDate << " " << dischargeDate << endl;
}


void Hospital::appendDoctorToFile() {
    string firstName;
    string lastName;
    long int id;
    string specialty;
    int yearsExperience;
    long double baseSalary;
    long double performanceBonus;

    cout << "First Name: ";
    cin >> firstName;
    cout << endl << "Last Name: ";
    cin >> lastName;
    cout << endl << "ID: ";
    cin >> id;
    cout << endl << "Specialty: ";
    cin >> specialty;
    cout << endl << "Years of Experience: ";
    cin >> yearsExperience;
    cout << endl << "Base Salary: ";
    cin >> baseSalary;
    cout << endl << "Performance Bonus: ";
    cin >> performanceBonus;

    ofstream doctorFile ("Doctors.txt");
    doctorFile << "\n" << firstName << " " << lastName << " " << id << " " << specialty << " " << yearsExperience << " " << baseSalary << " " << performanceBonus << endl;

}
