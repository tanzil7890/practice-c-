#include <iostream>
using namespace std;

//Example of Single Inheritance. A(Base Class) --> B(Derived Class)

class Base{
    int data1;  //private, and by default it is not inheritable.
    public:
        int data2;
        void setData();
        int getData1(); //we are using getData1() to access the data1 variable because data1 is private an cannot be accessed directly.
        int getData2();
};

void Base :: setData(void){
    data1 = 10;
    data2 = 20;
}

int Base :: getData1(){
    return data1;
}

int Base :: getData2(){
    return data2;
}

class Derived : public Base {   //class is being derived publically
    int data3;
    public:
        void process();
        void display();
};

void Derived :: process(void){
    data3 = data2 * getData1();
    //cout<<data3
}

void Derived :: display(void){
    cout<<"Value of data 1 is "<<getData1()<<endl;
    cout<<"Value of data 2 is "<<getData2()<<endl;
    cout << "Value of data 3 is " << data3 << endl;
}

int main() {
    Derived der;
    //Here, we can call the setData() because the visibility mode is public: public(Base Class) --> public(Derived Class)
    der.setData();  //First of it will set the value of data1 and data2
    der.process();  //Here, it will multiply data2 with getData1()
    der.display();  //Here, we will display the ouput of all the data's
    return 0;
}