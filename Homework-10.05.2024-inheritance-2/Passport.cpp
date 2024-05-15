#include "Passport.h"

    Passport::Passport() : Passport("Ivan", "Ivanov", "Ivanovich", "01.01.2001") {}
    Passport::Passport(string name, string surname, string patronymic) : Passport(name, surname, patronymic, "01.01.2001") {}
    Passport::Passport(string name, string surname, string patronymic, string dateOfBirth) {
        SetPassportSerial("AA");
        SetPassportNumber(123456);
        SetName(name);
        SetSurname(surname);
        SetPatronymic(patronymic);
        SetDateOfBirth(dateOfBirth);
        SetDateOfRelease("01.01.2017");
    }

    Passport::Passport(const Passport& original) : Passport(name, surname, patronymic, dateOfBirth) {
        this->passportSerial = original.passportSerial;
        this->passportNumber = original.passportNumber;
        this->name = original.name;
        this->surname = original.surname;
        this->patronymic = original.patronymic;
        this->dateOfBirth = original.dateOfBirth;
        this->dateOfRelease = original.dateOfRelease;
    }

    Passport::~Passport(){}

    void Passport::SetPassportSerial(string passportSerial) {
        this->passportSerial = passportSerial;
    }

    void Passport::SetPassportNumber(int passportNumber) {
        this->passportNumber = passportNumber;
    }

    void Passport::SetName(string name) {
        this->name = name;
    }

    void Passport::SetSurname(string surname) {
        this->surname = surname;
    }

    void Passport::SetPatronymic(string patronymic) {
        this->patronymic = patronymic;
    }

    void Passport::SetDateOfBirth(string dateOfBirth) {
        this->dateOfBirth = dateOfBirth;
    }

    void Passport::SetDateOfRelease(string dateOfRelease) {
        this->dateOfRelease = dateOfRelease;
    }

    string Passport::GetPassportSerial() const {
        return passportSerial;
    }

    int Passport::GetPassportNumber() const {
        return passportNumber;
    }

    string Passport::GetName() const {
        return name;
    }

    string Passport::GetSurname() const {
        return surname;
    }

    string Passport::GetPatronymic() const {
        return patronymic;
    }

    string Passport::GetDateOfBirth() const {
        return dateOfBirth;
    }

    string Passport::GetDateOfRelease() const {
        return dateOfRelease;
    }

     void Passport::Print() const {
        cout << "Passport serial and number: \t" << passportSerial << passportNumber << "\n";
        cout << "Name: \t\t\t\t" << name << " " << surname << " " << patronymic << "\n";
        cout << "Date of birth: \t\t\t" << dateOfBirth << "\n";
        cout << "Release date: \t\t\t" << dateOfRelease << "\n";
    }
