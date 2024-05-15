#pragma once
#include <iostream>
using namespace std;

class Passport {
protected:
    string passportSerial;
    int passportNumber = 0;
    string name;
    string surname;
    string patronymic;
    string dateOfBirth;
    string dateOfRelease;
public:
    Passport();
    Passport(string name, string surname, string patronymic);
    Passport(string name, string surname, string patronymic, string dateOfBirth);
    Passport(const Passport& original);

    ~Passport();

    void SetPassportSerial(string passportSerial);
    void SetPassportNumber(int passportNumber);
    void SetName(string name);
    void SetSurname(string surname);
    void SetPatronymic(string patronymic);
    void SetDateOfBirth(string dateOfBirth);
    void SetDateOfRelease(string dateOfRelease);

    string GetPassportSerial() const;
    int GetPassportNumber() const;
    string GetName() const;
    string GetSurname() const;
    string GetPatronymic() const;
    string GetDateOfBirth() const;
    string GetDateOfRelease() const;

    virtual void Print() const;
};

