#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    string model;
    int year;

    void setDetails(string b, string m, int y) {
        brand = b;
        model = m;
        year = y;
    }

    void displayInfo();
};

void Car::displayInfo() {
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Year: " << year << endl;
}

int main() {
    Car car1, car2;

    car1.setDetails("Toyota", "Corolla", 2020);
    car2.setDetails("Tesla", "Model 3", 2023);

    cout << "Car 1 Info:" << endl;
    car1.displayInfo();

    cout << "\nCar 2 Info:" << endl;
    car2.displayInfo();

    return 0;
}
