#include <string>
#include <iostream>
#include <fstream>

using namespace std;

class Ingredient {
protected:
    string name;
    double dosage;
    double pricePerUnit;
    static double totalSum;  // Статична змінна для загальної суми

public:
    // Методи сеттери
    void setName(string n);
    void setDosage(double d);
    void setPricePerUnit(double p);

    // Методи геттери
    string getName() const;
    double getDosage() const;
    double getPricePerUnit() const;

    // Підрахунок загальної ціни для інгредієнта
    double calculateTotalPrice() const;

    // Статичний метод для отримання загальної суми
    static double getTotalSum();

    // Виведення інформації про інгредієнт
    void displayInfo() const;

    // Збереження інформації у файл
    void saveToFile(ofstream& out) const;
};