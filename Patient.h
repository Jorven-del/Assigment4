#ifndef ASSIGMENT4_HEAD_H
#define ASSIGMENT4_HEAD_H
#include <iostream>
using namespace std;

class Patient {
public:
    // setters
    void set_firstName(string a) {
        firstName = a;
    }
    void set_lastName(string a) {
        lastName = a;
    }
    void set_id(long int a) {
        id = a;
    }
    void set_doctor(long int a) {
        doctor = a;
    }
    void set_birthday(string a) {
        birthday = a;
    }
    void set_bloodType(string a) {
        bloodType = a;
    }
    void set_diagnationDate(string a) {
        diagn = a;
    }
    void set_admissionDate(string a) {
        admissionDate = a;
    }
    void set_dischargeDate(string a) {
        dischargeDate = a;
    }

    // Getters
    string get_firstName() {
        return firstName;
    }
    string get_lastName() {
        return lastName;
    }
    long int get_id() {
        return id;
    }
    long int get_doctor() {
        return doctor;
    }
    string get_birthday() {
        return birthday;
    }
    string get_bloodType() {
        return bloodType;
    }

    string get_diagnationDate() {
        return diagn;
    }
    string get_admissionDate() {
        return admissionDate;
    }
    string get_dischargeDate() {
        return dischargeDate;
    }

private:
    string firstName;
    string lastName;
    long int id;
    long int doctor;
    string birthday;
    string bloodType;
    string diagn;
    string admissionDate;
    string dischargeDate;
};

bool IsDischarged(Patient a);
string Patient_Status();
void Print_Patient_Info();
#endif