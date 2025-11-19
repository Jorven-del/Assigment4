#ifndef ASSIGMENT4_HEAD_H
#define ASSIGMENT4_HEAD_H
#include <iostream>
using namespace std;

class Patient {
public:
    // setters
    void set_firstName(string a);
    void set_lastName(string a);
    void set_id(long int a);
    void set_doctor(long int a);
    void set_birthday(string a);
    void set_bloodType(string a);
    void set_diagn(string a);
    void set_admissionDate(string a);
    void set_dischargeDate(string a);

    // Getters
    string get_firstName();
    string get_lastName();
    long int get_id();
    long int get_doctor();
    string get_birthday();
    string get_bloodType();
    string get_diagn();
    string get_admissionDate();
    string get_dischargeDate();

    bool IsDischarged();
    string Patient_Status();
    void Print_Patient_Info();

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


#endif