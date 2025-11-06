#include <iostream>
#include <iomanip> // for manipulators
using namespace std;

int main() {
    int a = 10, b = 200, c = 3000;
    double x = 12.34567, y = 45.6789;

    cout << "Demonstration of Manipulators in C++" << endl;
    cout << "-----------------------------------" << endl;

    // Using setw() to set field width
    cout << setw(5) << a << setw(5) << b << setw(5) << c << endl;

    // Using setprecision() and fixed for floating point formatting
    cout << fixed << setprecision(2);
    cout << "Value of x: " << x << endl;
    cout << "Value of y: " << y << endl;

    // Using endl for new line
    cout << "This line uses endl manipulator." << endl;

    return 0;
}
