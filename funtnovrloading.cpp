#include<iostream>
using namespace std;
int add(int a, int b)
{
    return a + b;
}
float add(float a, float b)
{
    return a + b;
}
int add(int a, int b, int c)
{
    return a + b + c;
}
int main()
{
    int intSum = add(5,10);
    float floatSum = add(5.5f, 3.2f);
    int tripleSum = add(1, 2, 3);
    cout<< "Sum of 5 and 10 (int):"<< intSum <<endl;
    cout<< "Sum of 5.5 amd 3.2(float):"<<floatSum << endl;
    cout<< "Sum of 1, 2 and 3 (int):"<<tripleSum << endl;
    return 0;
}