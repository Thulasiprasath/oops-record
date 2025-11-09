#include <iostream>
using namespace std;
class Calculator {
public:
    inline int add(int a, int b) {
        return a + b;
    }
    inline int multiply(int a, int b) {
        return a * b;
    }
};
int main() {
    Calculator calc;
    int sum = calc.add(10, 20);
    int product = calc.multiply(5, 6);
    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;
    return 0;
}
