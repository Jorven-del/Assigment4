#include "Patient.h"
#include <iostream>

// setters
void Patient::set_firstName(string a) {
    firstName = a;
}
void Patient::set_lastName(string a) {
    lastName = a;
}
void Patient::set_id(long int a) {
    id = a;
}
void Patient::set_doctor(long int a) {
    doctor = a;
}
void Patient::set_birthday(string a) {
    birthday = a;
}
void Patient::set_bloodType(string a) {
    bloodType = a;
}
void Patient::set_diagn(string a) {
    diagn = a;
}
void Patient::set_admissionDate(string a) {
    admissionDate = a;
}
void Patient::set_dischargeDate(string a) {
    dischargeDate = a;
}

// Getters
string Patient::get_firstName() {
    return firstName;
}
string Patient::get_lastName() {
    return lastName;
}
long int Patient::get_id() {
    return id;
}
long int Patient::get_doctor() {
    return doctor;
}
string Patient::get_birthday() {
    return birthday;
}
string Patient::get_bloodType() {
    return bloodType;
}
string Patient::get_diagn() {
    return diagn;
}
string Patient::get_admissionDate() {
    return admissionDate;
}
string Patient::get_dischargeDate() {
    return dischargeDate;
}

//Others
bool Patient::IsDischarged() {
    return dischargeDate == "-1";
}

string Patient::Patient_Status() {
    if (diagn.find("critical") || diagn.find("Critical") || diagn.find("CRITICAL")) {
        return "Critical";
    }
    if (diagn.find("moderate") || diagn.find("Moderate") || diagn.find("MODERATE")) {
        return "Moderate";
    }
    return "Stable";
}

void Patient::Print_Patient_Info() {
    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;
    cout << "ID: " << id << endl;
    cout << "Assigned Doctor: " << doctor << endl;
    cout << "Date of Birth: " << birthday << endl;
    cout << "Blood Type: " << bloodType << endl;
    cout << "Diagnosis: " << diagn << endl;
    cout << "Date of Admission: " << admissionDate << endl;
    cout << "Discharge Date: " << dischargeDate << endl;
}