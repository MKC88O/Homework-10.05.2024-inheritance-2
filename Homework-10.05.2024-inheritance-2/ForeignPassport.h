#pragma once
#include <iostream>
#include "Passport.h"
#include "Visa.h"
using namespace std;

class ForeignPassport : public Passport {
    Visa visa;
    string passportSerialForeign;
    int passportNumberForeign = 0;
    string dateOfRelease;
    string dateOfExpiration;
public:
    void SetPassportSerialForeign(string passportSerialForeign);
    void SetPassportNumberForeign(int passportNumberForeign);
    void SetDateOfRelease(string dateOfRelease);
    void SetDateOfExpiration(string dateOfExpiration);

    string GetPassportSerial() const;
    int GetPassportNumber() const;
    string GetDateOfRelease(string dateOfRelease) const;
    string GetDateOfExpiration(string dateOfExpiration) const;

    ForeignPassport();
    ForeignPassport(string name, string surname, string patronymic);
    ForeignPassport(string passportSerialForeign, int passportNumberForeign);
    ForeignPassport(const ForeignPassport& original);

    ~ForeignPassport();

    void Print() const;
};

