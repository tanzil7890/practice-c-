#include <iostream>
using namespace std;

// Initialization list in constructor

/*
Syntax for initialization list in constructor:
constructor (argument-list) : initialization-section
{
    assignment + other code;
}

Ex:

class Test {
    int a;
    int b;
    public:
        Test(int i, int j) : a(i), b(j) {constructor-body}
};

 */

class Test
{
    int a;
    int b;

public:
    //Different Cases:
    
    //Test(int i, int j) : a(i), b(j)
    //Test(int i, int j) : a(i), b(i+j)
    //Test(int i, int j) : a(i), b(2 * j)
    //Test(int i, int j) : a(i), b(a + j)
    //Test(int i, int j) : b(j), a(i + b)     //This will run but throw garbage value because a is initialized at first anf then b.
    Test(int i, int j) : a(i)
    {
        b = j;
        cout << "Constructor Executed"<<endl;
        cout<<"Value of a is "<<a<<endl;
        cout<<"Value of b is "<<b<<endl;
    }
};

int main()
{
    Test t(4, 6);
    return 0;
}