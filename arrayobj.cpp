#include <iostream>
using namespace std;
class Student {
private:
    string name;
    int age;
public:
    void setData(string n, int a) {
        name = n;
        age = a;
    }
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
int main() {
    Student students[3]; 
    students[0].setData("Alice", 20);
    students[1].setData("Bob", 22);
    students[2].setData("Charlie", 19);
    for (int i = 0; i < 3; i++) {
        students[i].display();
    }
    return 0;
}
