#include <iostream>

using namespace std;

//Reference Practice
//It is an alias or an another name to a variable.


int main() {
    int a = 10;
    //int *r = &a;    //To store the address
    int &r = a;     //To be reference or an alias of a.
    cout<<a<<endl;
    r++;
    cout<<a<<endl;
    cout<<r<<endl;

    r = 35;         //Here if there is change in r or a then it will be reflected to all the both the reference;
    cout << a << endl;
    cout << r << endl;

    return 0;
}