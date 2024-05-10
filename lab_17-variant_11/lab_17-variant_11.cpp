#include <iostream>
#include "windows.h"
using namespace std;

class Wheel {
    float rad;
public: 
    Wheel() : rad(0) {cout << "Конструктор класу \"колесо\" викликаний з параметрами за замовчуванням" << endl;}
    Wheel(float r) : rad(r) {cout << "Конструктор класу \"колесо\" викликаний за заданими параметрами" << endl; }
    float getRadius() const { return rad; }
    ~Wheel() { cout << "Викликаний деструктор класу \"колесо\"" << endl; }
};

class Car {
    Wheel wheel;
    string mark;
    float price;
public:
    Car() : wheel(Wheel()), mark(""), price(0) {cout << "Конструктор класу \"автомобіль\" викликаний з параметрами за замовчуванням" << endl;}
    Car(float r, string m, float p) : wheel(Wheel(r)), mark(m), price(p) {cout << "Конструктор класу \"автомобіль\" викликаний за заданими параметрами" << endl;}
    const Wheel &getWheel() const{ return wheel; }
    string getMark() const { return mark; }
    float getPrice() const { return price; }
    ~Car() { cout << "Викликаний деструктор класу \"автомобіль\"" << endl; }
};

class Truck: public Car {
    float capacity;
public:
    Truck() : Car(), capacity(0) {cout << "Конструктор класу \"вантажівка\" викликаний з параметрами за замовчуванням" << endl;}
    Truck(float r, string m, float p, float c) : Car(r, m, p), capacity(c) {cout << "Конструктор класу \"вантажівка\" викликаний за заданими параметрами" << endl;}
    float getCapacity() const { return capacity; }
    void showInfo() const;
    ~Truck() { cout << "Викликаний деструктор класу \"вантажівка\"" << endl;}
};

void Truck::showInfo() const {
    cout << "Вантажопідйомність: " << getCapacity() << endl;
    cout << "Марка: " << getMark() << endl;
    cout << "Ціна: " << getPrice() << endl;
    cout << "Радіус колеса: " << getWheel().getRadius() << endl;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Truck truck = Truck(5, "Jeep", 5000, 1000);
    truck.showInfo();
}