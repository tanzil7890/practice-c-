
#include <iostream>
using namespace std;

// Easy Examples of Friend Function

// Formal declaration
class Y;

class X
{
    int data;

public:
    void setvalue(int value)
    {
        data = value;
    }
    // We are using friend to declare add as the friend of X class, so to access the private member of the class
    friend void add(X, Y);
};

class Y
{
    int num;

public:
    void setvalue(int value)
    {
        num = value;
    }
    // We are using friend to declare add as the friend of Y class, so to access the private member of the class
    friend void add(X, Y);
};

void add(X o1, Y o2)
{
    cout << "Summing data of X and Y object gives me: " << o1.data + o2.num;
}

int main()
{
    X a1;
    a1.setvalue(3);

    Y b1;
    b1.setvalue(5);
    add(a1, b1);

    return 0;
}