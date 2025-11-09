#include <iostream>
using namespace std;
class Number {
private:
    int value;
public:
    Number() : value(0) {}
    Number(int v) : value(v) {}
    void display() {
        cout << "Value: " << value << endl;
    }
    Number operator+(const Number &n) {
        return Number(value + n.value);
    }
    Number operator-(const Number &n) {
        return Number(value - n.value);
    }
};
int main() {
    Number n1(10), n2(5);
    Number n3 = n1 + n2;
    cout << "After Addition: ";
    n3.display();
    Number n4 = n1 - n2;
    cout << "After Subtraction: ";
    n4.display();
    return 0;
}
