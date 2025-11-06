#include <iostream>
using namespace std;

class Box {
private:
    double width;

public:
    Box(double w) : width(w) {}

    // Declare friend function
    friend void printWidth(Box box);
};

// Friend function definition
void printWidth(Box box) {
    // Access private member width directly
    cout << "Width of box: " << box.width << endl;
}

int main() {
    Box b(10.5);

    printWidth(b);  // Call friend function

    return 0;
}
