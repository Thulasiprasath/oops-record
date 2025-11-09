#include <iostream>
using namespace std;

class MathOperations {
public:
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }

    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    MathOperations obj;

    cout << "Sum of two integers: " << obj.add(5, 10) << endl;
    cout << "Sum of three integers: " << obj.add(5, 10, 15) << endl;
    cout << "Sum of two doubles: " << obj.add(5.5, 10.3) << endl;

    return 0;
}
