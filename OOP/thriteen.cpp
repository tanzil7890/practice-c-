#include <iostream>
using namespace std;

// Example of Constructor

// called is also known as invoke

class Complex
{
    int a, b;

public:
    // Creating Constructor
    // Constructor is a special member function with same name as of the class.
    // It automatically invoked whenever an object is created.
    // It is used to initialize the object of the class.

    Complex(void); // Constructor declaration

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i " << endl;
    }
};

// Here we are defining the constructor
Complex ::Complex(void)
{ // This is default constructor
    a = 10;
    b = 10;
    // cout<<"Hello Tanzil";
}

int main()
{
    Complex c;
    c.printNumber();

    return 0;
}

/* Properties of Constructor

1. It should b declared in the public section of the class
2. They are automatically invoked/called whenever the object is created.
3. They cannot return values and Do not have return type.
4. It can have default arguments.
5. We cannot refer to their address.

*/