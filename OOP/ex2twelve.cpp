
#include <iostream>
using namespace std;

//Complex Example of function

// Forward declaration
class c2;

class c1
{
    int val1;
    friend void exchange(c1 &, c2 &);

public:
    void intdata(int a)
    {
        val1 = a;
    }
    void display(void)
    {
        cout << val1 << endl;
    }
};

class c2
{
    int val2;
    friend void exchange(c1 &, c2 &);

public:
    void intdata(int a)
    {
        val2 = a;
    }
    void display(void)
    {
        cout << val2 << endl;
    }
};

void exchange(c1 &x, c2 &y)
{
    int tmp = x.val1;
    x.val1 = y.val2;
    y.val2 = tmp;
}

int main()
{
    c1 oc1;
    oc1.intdata(4);
    c2 oc2;
    oc2.intdata(5);

    exchange(oc1, oc2);

    cout << "The valu of c1 after exchanging becomes: ";
    oc1.display();
    cout << "The valu of c2 after exchnaging becomes: ";
    oc2.display();

    return 0;
}