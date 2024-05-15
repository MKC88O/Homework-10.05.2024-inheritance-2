#include "Visa.h"

    Visa::Visa() : Visa("Work & Travel", "USA", "18.05.2024", "18.05.2025") {}
    Visa::Visa(string country) : Visa("Work & Travel", country, "18.05.2024", "18.05.2025") {}
    Visa::Visa(string type, string country) : Visa(type, country, "18.05.2024", "18.05.2025") {}
    //main constructor
    Visa::Visa(string type, string country, string start, string end) {
        SetType(type);
        SetCountry(country);
        SetStart(start);
        SetEnd(end);
    }

    Visa::Visa(const Visa& original) : Visa(type, country, start, end) {
        this->type = original.type;
        this->country = original.country;
        this->start = original.start;
        this->end = original.end;
    }

    Visa::~Visa() {}

    void Visa::SetType(string type) {
        this->type = type;
    }

    void Visa::SetCountry(string country) {
        this->country = country;
    }

    void Visa::SetStart(string start) {
        this->start = start;
    }

    void Visa::SetEnd(string end) {
        this->end = end;
    }

    string Visa::GetType() const {
        return type;
    }

    string Visa::GetCountry() const {
        return country;
    }

    string Visa::GetStart() const {
        return start;
    }

    string Visa::GetEnd() const {
        return end;
    }

    void Visa::Print() const {
        cout << "\t    ~VISA~\n";
        cout << "Type of Visa:\t " << type << "\n";
        cout << "Country:\t " << country << "\n";
        cout << "Date of start:\t " << start << "\n";
        cout << "Date of end:\t " << end << "\n";
    }
