#include <iostream>
using namespace std;

// Example of Copy Constructor
// Copy constructor is the constructor which make copy of other objects.

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    };

    Number(int num)
    {
        a = num;
    }

    // Copy constructor
    // if we comment out the below copy constructor code then also the program will behave like copy constructor because compiler allocate default copy connstructor to every program or a class.
    // When no copy constructor is found, compiler supplies its own constructor.(Imp: with checking the code or for finding the output.)
    Number(Number &obj)
    {
        cout << "Copy constructor called" << endl;
        a = obj.a;
    }

    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};

int main()
{
    Number x, y, z(69), z2;
    x.display();
    y.display();
    z.display();

    // To make a program which show resemblence of z or x or y.

    // Copy constructor initializing and calling object
    Number z1(z); // Copy constructor invoked
    z1.display();

    // z2 = z;  //copy constructor not called

    Number z3 = z; // Copy constructor invoked, because when we are make object like this [Number z3] then it will invoke.
    z3.display();

    return 0;
}