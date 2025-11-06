#include <iostream>
using namespace std;
class Student
{
public:
    int rollNo;
    string name;
    float marks;
    void getData()
    {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Marks: ";
        cin >> marks;
    }
    void showData()
    {
        cout << "\nRoll No: " << rollNo;
        cout << "\nName   : " << name;
        cout << "\nMarks  : " << marks << endl;
    }
};
int main()
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    Student s[n]; // Array of objects
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details for Student " << i + 1 << ":\n";
        s[i].getData();
    }
    cout << "\n--- Student Details ---\n";
    for (int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 << ":\n";
        s[i].showData();
    }
return 0;
}