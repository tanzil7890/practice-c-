#include <iostream>
using namespace std;

// Friend classes & Member Friend Function

// What we are doing here is making one class function friend of another class. ex: friend int Calculator :: sumRealComplex(Complex , Complex );

// Below is example of Forward declaration - TO state there is the class name with Complex forward in the program. So to avoid any kind of error in Class Calculator.
class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    // Below is function definition - To state
    int sumRealComplex(Complex, Complex);
    int sumCompComplex(Complex, Complex);
};

class Complex
{
    int a, b;

    // Here below we are making friends to sumRealComplex by giving all the private data. Therefore, it is stating that you can access all my private data.
    // Also Indiviually declaring function as a friend.
    friend int Calculator ::sumRealComplex(Complex, Complex);
    friend int Calculator ::sumCompComplex(Complex, Complex);

    // Alternate: Declaring entire calculator class as friend of complex. ex of friend class
    // friend class Calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int Calculator ::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);
    Calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is: " << res << endl;
    int resc = calc.sumCompComplex(o1, o2);
    cout << "The sum of complex part of o1 and o2 is: " << resc << endl;
    return 0;
}