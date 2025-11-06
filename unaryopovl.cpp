#include <iostream>
using namespace std;

class Number {
    int x;

public:
    // Constructor to initialize the number
    Number(int a) {
        x = a;
    }

    // Display function
    void display() {
        cout << "Value of x: " << x << endl;
    }

    // Overloading unary minus (-) operator
    void operator - () {
        x = -x;
    }

    // Overloading ++ operator (increment)
    void operator ++ () {
        ++x;
    }
};

int main() {
    Number n1(10);

    cout << "Before applying unary operators:" << endl;
    n1.display();

    -n1; // calls overloaded unary minus operator
    cout << "\nAfter applying unary minus (-):" << endl;
    n1.display();

    ++n1; // calls overloaded ++ operator
    cout << "\nAfter applying increment (++) operator:" << endl;
    n1.display();

    return 0;
}
