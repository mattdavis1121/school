//
// Created by Matthew Davis on 2/8/18.
//

#include <iostream>
#include <cstring>  // TODO: Remove

#include "RentalCar.h"

using namespace std;

RentalCar::RentalCar() {
    m_year = -1;
    strcpy(m_make, "NOMAKE");
    strcpy(m_model, "NOMODEL");
    m_price = 0;
    m_available = false;
}

RentalCar::RentalCar(int year, const char *make, const char *model, float price, bool available) {
    m_year = year;
    strcpy(m_make, make);
    strcpy(m_model, model);
    m_price = price;
    m_available = available;
}


// TEST


void RentalCar::print() const {
    cout << m_year << " " << m_make << " " << m_model << ", Price: $" << m_price << ", Available: " << boolalpha
         << m_available << endl;
}

