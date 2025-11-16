#include "Doctor.h"
#include <iostream>

using namespace std;

//Setters
void Doctor::set_firstName(string a) {
    firstName = a;
}
void Doctor::set_lastName(string a) {
    lastName = a;
}
void Doctor::set_id(long int a) {
    id = a;
}
void Doctor::set_specialty(string a) {
    specialty = a;
}
void Doctor::set_yearsExperience(int a) {
    yearsExperience = a;
}
void Doctor::set_baseSalary(long double a) {
    baseSalary = a;
}
void Doctor::set_performanceBonus(long double a) {
    performanceBonus = a;
}

//Getters
string Doctor::get_firstName() {
    return firstName;
}
string Doctor::get_lastName() {
    return lastName;
}
long int Doctor::get_id() {
    return id;
}
string Doctor::get_specialty() {
    return specialty;
}
int Doctor::get_yearsExperience() {
    return yearsExperience;
}
long double Doctor::get_baseSalary() {
    return baseSalary;
}
long double Doctor::get_performanceBonus() {
    return performanceBonus;
}

long double calculateCompensation(long double baseSalary, long double performanceBonus) {
    return (performanceBonus + 1) * baseSalary;
}

void Doctor::Print_Doctor_Info() {
    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;
    cout << "ID: " << id << endl;
    cout << "Specialty: " << specialty << endl;
    cout << "Years of Experience: " << yearsExperience << endl;
    cout << "Base Salary: " << baseSalary << endl;
    cout << "Performance Bonus: " << performanceBonus * 100 << "%" << endl;
}
