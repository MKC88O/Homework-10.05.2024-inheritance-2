#pragma once
#include <iostream>
using namespace std;

class Visa {
    string type;
    string country;
    string start;
    string end;
public:
    Visa();
    Visa(string country);
    Visa(string type, string country);
    //main constructor
    Visa(string type, string country, string start, string end);
    Visa(const Visa& original);

    ~Visa();

    void SetType(string type);
    void SetCountry(string country);
    void SetStart(string start);
    void SetEnd(string end);

    string GetType() const;
    string GetCountry() const;
    string GetStart() const;
    string GetEnd() const;

    void Print() const;
};

