#include <iostream>
using namespace std;

//Template with Default parameter
/*
Syntax:
template <class T1 = dataType name, class T2 = dataType name>
 */

template <class T1=int, class T2=float, class T3=char>
class DEMO
{
    public:
        T1 a;
        T2 b;
        T3 c;

        DEMO(T1 x, T2 y, T3 z){
            a = x;
            b = y;
            c = z;
        }

        void display(){
            cout<<"The value of a: "<<a<<endl;
            cout<<"The value of b: "<<b<<endl;
            cout << "The value of c: " << c << endl;
        }

};

int main()
{
    DEMO<> obj(10.66, 20.44, 'd');
    obj.display();

    cout<<endl;

    //Here we manually change the dataType inside the template of class T1, T2, T3.
    DEMO<int, char, char> d1(10, 'T', 'A');
    d1.display();

    return 0;
}