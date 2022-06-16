#include <iostream>
using namespace std;

// Example of Parameterized and Default constructor

class Complex
{
    int a, b;

public:
    // Creating Constructor
    // Constructor is a special member function with same name as of the class.
    // It automatically invoked whenever an object is created.
    // It is used to initialize the object of the class.

    Complex(int, int); // Constructor declaration

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i " << endl;
    }
};

Complex ::Complex(int x, int y)
{ // This is parameterized constructor as it takes parameters.
    a = x;
    b = y;
}

int main()
{
    // Parameterized constructor values can be passed during object creation in main.
    // This call is also known as Implicit call exx: Complex a(10, 20), b(4, 6);
    Complex a(10, 20);

    // Explicit call
    Complex b = Complex(5, 7);

    a.printNumber();
    b.printNumber();
    return 0;
}