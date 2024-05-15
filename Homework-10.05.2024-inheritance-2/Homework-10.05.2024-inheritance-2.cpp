// Homework-10.05.2024-inheritance-2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Passport.h"
#include "Visa.h"
#include "ForeignPassport.h"

using namespace std;

int main() {
    Passport pass;
    pass.Print();
    cout << "\n\n";

    ForeignPassport ForPass;
    ForPass.Print();
}


