#include <iostream>
using namespace std;

int main() {
    // Ввод данных
    double costOfProduct = 150.0; // стоимость товара
    double shippingCost = 20.0;    // стоимость доставки
    double discount = 10.0;         // скидка

    // Вычисление полной стоимости
    double totalCost = costOfProduct + shippingCost - discount;

    // Вывод данных
    cout << "Стоимость товара: " << costOfProduct << " руб." << endl;
    cout << "Стоимость доставки: " << shippingCost << " руб." << endl;
    cout << "Скидка: " << discount << " руб." << endl;
    cout << "Полная стоимость товара: " << totalCost << " руб." << endl;

    return 0;
}
