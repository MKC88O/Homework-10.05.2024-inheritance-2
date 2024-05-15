#include "ForeignPassport.h"

    void ForeignPassport::SetPassportSerialForeign(string passportSerialForeign) {
        this->passportSerialForeign = passportSerialForeign;
    }

    void ForeignPassport::SetPassportNumberForeign(int passportNumberForeign) {
        this->passportNumberForeign = passportNumberForeign;
    }

    void ForeignPassport::SetDateOfRelease(string dateOfRelease) {
        this->dateOfRelease = dateOfRelease;
    }

    void ForeignPassport::SetDateOfExpiration(string dateOfExpiration) {
        this->dateOfExpiration = dateOfExpiration;
    }

    string ForeignPassport::GetPassportSerial() const {
        return passportSerialForeign;
    }

    int ForeignPassport::GetPassportNumber() const {
        return passportNumberForeign;
    }

    string ForeignPassport::GetDateOfRelease(string dateOfRelease) const {
        return dateOfRelease;
    }

    string ForeignPassport::GetDateOfExpiration(string dateOfExpiration) const {
        return dateOfExpiration;
    }

    ForeignPassport::ForeignPassport() : ForeignPassport("GF", 567890) {}
    ForeignPassport::ForeignPassport(string name, string surname, string patronymic) : ForeignPassport("GF", 567890) {}
    ForeignPassport::ForeignPassport(string passportSerialForeign, int passportNumberForeign) {
        SetPassportSerialForeign(passportSerialForeign);
        SetPassportNumberForeign(passportNumberForeign);
        SetDateOfRelease("01.01.2018");
        SetDateOfExpiration("01.01.2028");
    }

    ForeignPassport::ForeignPassport(const ForeignPassport& original) : ForeignPassport("GF", 567890) {
        this->passportSerialForeign = original.passportSerialForeign;
        this->passportNumberForeign = original.passportNumberForeign;
        this->dateOfRelease = original.dateOfRelease;
        this->dateOfExpiration = original.dateOfExpiration;
    }

    ForeignPassport::~ForeignPassport() {}

    void ForeignPassport::Print() const {
        cout << "Foreign serial and number: \t" << passportSerialForeign << passportNumberForeign << "\n";
        cout << "Name: \t\t\t\t" << name << " " << surname << " " << patronymic << "\n";
        cout << "Date of birth: \t\t\t" << dateOfBirth << "\n";
        cout << "Release date: \t\t\t" << dateOfRelease << "\n";
        cout << "Expiration date: \t\t" << dateOfExpiration << "\n";
        visa.Print();
    }
