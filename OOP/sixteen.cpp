#include <iostream>
using namespace std;

// Example of Constructor with default arguments.

class Simple
{
    int data1, data2, data3;

public:
    Simple(int a, int b = 9, int c = 90)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void printData();
};

void Simple ::printData()
{
    cout << " The value of data is " << data1 << " and " << data2 << " and " << data3 << endl;
}

int main()
{
    Simple s(1, 4, 20);
    s.printData();
    // The value of data is 1 and 4 and 20

    Simple s1(0);
    s1.printData();
    // The value of data is 0 and 9 and 90
    // Therefore, here there is only one parameter in s1 so the initialize value of b will be stored, and get.
    return 0;
}