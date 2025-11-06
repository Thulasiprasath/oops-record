#include <iostream>
using namespace std;

class ElectricityBill 
{
    int consumerNo, prevReading, currReading;
    string name, type;
    float amount;

public:
    void getData() {
        cout << "Consumer No: "; cin >> consumerNo;
        cout << "Name: "; cin.ignore(); getline(cin, name);
        cout << "Previous Reading: "; cin >> prevReading;
        cout << "Current Reading: "; cin >> currReading;
        cout << "Connection Type (Domestic/Commercial): "; cin >> type;
    }

    void calculate() {
        int units = currReading - prevReading;
        amount = 0;
        if (type == "Domestic")
        {
            if (units <= 100) amount = units * 1;
            else if (units <= 200) amount = 100 * 1 + (units - 100) * 2.5;
            else if (units <= 500) amount = 100 * 1 + 100 * 2.5 + (units - 200) * 4;
            else amount = 100 * 1 + 100 * 2.5 + 300 * 4 + (units - 500) * 6;
        }
        else 
        {
            if (units <= 100) amount = units * 2;
            else if (units <= 200) amount = 100 * 2 + (units - 100) * 4.5;
            else if (units <= 500) amount = 100 * 2 + 100 * 4.5 + (units - 200) * 6;
            else amount = 100 * 2 + 100 * 4.5 + 300 * 6 + (units - 500) * 7;
        }
    }
        void display()
        {
        cout << "\n--- Electricity Bill ---\n";
        cout << "Consumer No: " << consumerNo << "\n";
        cout << "Name       : " << name << "\n";
        cout << "Type       : " << type << "\n";
        cout << "Units Used : " << currReading - prevReading << "\n";
        cout << "Amount     : Rs. " << amount << "\n";
    }
};
int main() 
{
    ElectricityBill eb;
    eb.getData();
    eb.calculate();
    eb.display();
    return 0;
}