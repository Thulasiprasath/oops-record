#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    string model;
    int year;

    void displayInfo() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    Car car1;
    Car car2;

    car1.brand = "Toyota";
    car1.model = "Corolla";
    car1.year = 2020;

    car2.brand = "Tesla";
    car2.model = "Model 3";
    car2.year = 2023;

    cout << "Car 1 Info:" << endl;
    car1.displayInfo();

    cout << "\nCar 2 Info:" << endl;
    car2.displayInfo();

    return 0;
}
