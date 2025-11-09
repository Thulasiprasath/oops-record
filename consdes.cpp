#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    Student() {
        name = "Unknown";
        age = 0;
        cout << "Default constructor called" << endl;
    }

    Student(string n, int a) {
        name = n;
        age = a;
        cout << "Parameterized constructor called" << endl;
    }

    Student(const Student &s) {
        name = s.name;
        age = s.age;
        cout << "Copy constructor called" << endl;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    ~Student() {
        cout << "Destructor called for " << name << endl;
    }
};

int main() {
    Student s1;
    Student s2("Alice", 20);
    Student s3(s2);

    s1.display();
    s2.display();
    s3.display();

    return 0;
}
