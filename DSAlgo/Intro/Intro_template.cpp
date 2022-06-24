#include <iostream>
using namespace std;

// Template
template <class T>
class Arithmetic
{
    T a;
    T b;

public:
    Arithmetic(T a, T b);
    T add();
    T sub();
};

template <class T>
Arithmetic<T>::Arithmetic(T num1, T num2)
{
    this->a = num1;
    this->b = num2;
}

template <class T>
T Arithmetic<T>::add()
{
    T c = a + b;
    return c;
}

template <class T>
T Arithmetic<T>::sub()
{
    T c = a - b;
    return c;
}

int main()
{
    Arithmetic<int> a(50, 20);
    cout << a.add() << endl;
    cout << a.sub() << endl;

    Arithmetic<float> a1(50.40, 20.23);
    cout << a1.add()<<endl;

    Arithmetic<double> a2(34.12, 2.17);
    cout << a2.add()<<endl;

    Arithmetic<char> a3('T', 'A');
    cout << (int)a3.add()<<endl;
 
    return 0;
}