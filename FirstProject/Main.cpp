#include <iostream> 

int main() {
    setlocale(LC_ALL, "Russian");

    int lap = 4;
    int engine = 254;
    int wheels = 93;
    int steeringWheel = 49;
    int wind = 21;
    int rain = 17;

    int speed = engine + wheels + steeringWheel - wind - rain;

    std::cout << "===================\n";
    std::cout << "����� �����. ���� " << lap << "\n";
    std::cout << "===================\n";
    std::cout << "������� (" << speed << ")\n";
    std::cout << "===================\n";
    std::cout << "��������: �������\n";
    std::cout << "��������: " << speed << "\n";
    std::cout << "-------------------\n";
    std::cout << "���������\n";
    std::cout << "���������: +" << engine << "\n";
    std::cout << "������: +" << wheels << "\n";
    std::cout << "����: +" << steeringWheel << "\n";
    std::cout << "-------------------\n";
    std::cout << "�������� ������ ������\n";
    std::cout << "�����: -" << wind << "\n";
    std::cout << "�����: -" << rain << "\n";

    return 0;
}

