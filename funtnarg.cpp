#include<iostream>
using namespace std;
class rectangle
{
    public:
          int length;
          int width;
          rectangle(int l, int w) : length(l), width(w) {}
          int area() const
        {
            return length * width;
        }
    };
    void printarea(const rectangle &rect)
       {
        cout<<"The area of the rectangle is: "<<rect.area()<<endl;
    }
    int main()
    {
        rectangle myRect(10,5);
        printarea (myRect);
        return 0;
     }    