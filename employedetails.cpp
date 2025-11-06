#include <iostream>
using namespace std;

class Employee {
private:
    int id;
    string name;
    string department;
    float salary;

public:
    // Method to input employee details
    void getDetails() {
        cout << "Enter Employee ID: ";
        cin >> id;
        cin.ignore(); // to clear the newline left in the buffer
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Department: ";
        getline(cin, department);
        cout << "Enter Salary: ";
        cin >> salary;
    }

    // Method to display employee details
    void showDetails() {
        cout << "\n--- Employee Details ---" << endl;
        cout << "ID         : " << id << endl;
        cout << "Name       : " << name << endl;
        cout << "Department : " << department << endl;
        cout << "Salary     : " << salary << endl;
    }
};

int main() {
    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    Employee emp[n]; // Array of objects

    // Input details for each employee
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for Employee " << i + 1 << ":" << endl;
        emp[i].getDetails();
    }

    // Display details for each employee
    for (int i = 0; i < n; i++) {
        cout << "\nDetails of Employee " << i + 1 << ":" << endl;
        emp[i].showDetails();
    }

    return 0;
}
