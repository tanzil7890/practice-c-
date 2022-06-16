#include <iostream>
using namespace std;

// Constructor Overloading
//It is same as the function overloading/polymorphism

class Complex
{
    int a, b;

public:
    Complex()
    {
        a = 0;
        b = 0;
    }
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    Complex(int x)
    {
        a = x;
        b = 0;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    Complex num1(10, 20), num2(4), num3;
    num1.printNumber();
    num2.printNumber();
    num3.printNumber();
}