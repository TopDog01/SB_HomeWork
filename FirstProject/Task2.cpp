#include <iostream>
using namespace std;

int main() {
    // ���� ������
    double costOfProduct = 150.0; // ��������� ������
    double shippingCost = 20.0;    // ��������� ��������
    double discount = 10.0;         // ������

    // ���������� ������ ���������
    double totalCost = costOfProduct + shippingCost - discount;

    // ����� ������
    cout << "��������� ������: " << costOfProduct << " ���." << endl;
    cout << "��������� ��������: " << shippingCost << " ���." << endl;
    cout << "������: " << discount << " ���." << endl;
    cout << "������ ��������� ������: " << totalCost << " ���." << endl;

    return 0;
}
