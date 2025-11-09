#include <iostream>
using namespace std;
class Distance {
public:
    int feet, inch;
    Distance(int f, int i) : feet(f), inch(i) {}
    void operator-() {
        feet = -feet;
        inch = -inch;
    }
    void display() {
        cout << "Feet: " << feet << " Inch: " << inch << endl;
    }
};
int main() {
    Distance D1(8, 9);
    -D1;
    D1.display(); 
    return 0;
}
