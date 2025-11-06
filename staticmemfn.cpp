#include <iostream>
using namespace std;

class MyClass {
private:
    static int count;  // Static data member

public:
    MyClass() {
        count++;  // Increment count every time an object is created
    }

    // Static member function to access static data member
    static int getCount() {
        return count;
    }
};

// Initialize static data member outside the class
int MyClass::count = 0;

int main() {
    MyClass obj1;
    MyClass obj2;

    // Call static member function using class name
    cout << "Number of objects created: " << MyClass::getCount() << endl;

    MyClass obj3;
    cout << "Number of objects created after creating obj3: " << MyClass::getCount() << endl;

    return 0;
}
