#include <iostream>
using namespace std;

void display() {
    // Local class inside function 'display'
    class Local {
    public:
        void show() {
            cout << "Hello from the Local class!" << endl;
        }
    };

    // Create an object of the local class
    Local obj;
    obj.show();
}

int main() {
    cout << "Demonstration of Local Class in C++" << endl;
    // Call the function that defines and uses a local class
    display();
    return 0;
}
