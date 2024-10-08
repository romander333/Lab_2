#include "Ingredient.h"
#include <iostream>
using namespace std;

double Ingredient::totalSum = 0.0;

void Ingredient::setName(string n) {
    name = n;
}

void Ingredient::setDosage(double d) {
    dosage = d;
    totalSum = 0.0; // Оновлення totalSum
}

void Ingredient::setPricePerUnit(double p) {
    pricePerUnit = p;
    totalSum = 0.0; // Оновлення totalSum
}

string Ingredient::getName() const {
    return name;
}

double Ingredient::getDosage() const {
    return dosage;
}

double Ingredient::getPricePerUnit() const {
    return pricePerUnit;
}

double Ingredient::calculateTotalPrice() const {
    return dosage * pricePerUnit;
}

double Ingredient::getTotalSum() {
    return totalSum;
}

void Ingredient::displayInfo() const {
    cout << "Name: " << name << endl;
    cout << "Dosage: " << dosage << " Units" << endl;
    cout << "Unit price: " << pricePerUnit << " UAH" << endl;
    cout << "Total price: " << calculateTotalPrice() << " UAH" << endl;
}

void Ingredient::saveToFile(ofstream& out) const {
    out << "Name: " << name << endl;
    out << "Dosage: " << dosage << " Units" << endl;
    out << "Unit price: " << pricePerUnit << " UAH" << endl;
    out << "Total price: " << calculateTotalPrice() << " UAH" << endl;
    out << "-----------------------------" << endl; // Розділювач для зручності
}





