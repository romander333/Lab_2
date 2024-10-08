#include <string>
#include <iostream>
#include <fstream>

using namespace std;

class Ingredient {
protected:
    string name;
    double dosage;
    double pricePerUnit;
    static double totalSum;  // �������� ����� ��� �������� ����

public:
    // ������ �������
    void setName(string n);
    void setDosage(double d);
    void setPricePerUnit(double p);

    // ������ �������
    string getName() const;
    double getDosage() const;
    double getPricePerUnit() const;

    // ϳ�������� �������� ���� ��� �����䳺���
    double calculateTotalPrice() const;

    // ��������� ����� ��� ��������� �������� ����
    static double getTotalSum();

    // ��������� ���������� ��� �����䳺��
    void displayInfo() const;

    // ���������� ���������� � ����
    void saveToFile(ofstream& out) const;
};