#include <iostream>
using namespace std;

class Test {
    public:
        Test() {cout<<"Default"<<endl;}
        Test(int x) {cout<<"Paramterized\n";}
};

class Main {
    Test t;
    public:
        Main() {
             t = Test(10);
        }
};