#ifndef ASSIGMENT4_DOCTOR_H
#define ASSIGMENT4_DOCTOR_H
#include <iostream>
using namespace std;

class Doctor {
public:
    //setters
    void set_firstName(string a);
    void set_lastName(string a);
    void set_id(long int a);
    void set_specialty(string a);
    void set_yearsExperience(int a);
    void set_baseSalary(long double a);
    void set_performanceBonus(long double a);

    //getters
    string get_firstName();
    string get_lastName();
    long int get_id();
    string get_specialty();
    int get_yearsExperience();
    long double get_baseSalary();
    long double get_performanceBonus();

    long double calculateCompensation(long double baseSalary, long double performanceBonus);
    void Print_Doctor_Info();

private:
    string firstName;
    string lastName;
    long int id;
    string specialty;
    int yearsExperience;
    long double baseSalary;
    long double performanceBonus;
};


#endif