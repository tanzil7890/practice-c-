#include <iostream>
using namespace std;

// Ambiguity resolution

class Base1 {
    public:
        void greet(){
            cout<<"How are you?"<<endl;
        }

};

class Base2 {
    public:
        void greet(){
            cout<<"Kaise ho?"<<endl;
        }

};

class Derived : public Base1, public Base2{
    int a;
    public:
        void greet(){
            // This how we can solve the ambiguity by making another greet function and adding the {classname} :: {function_name} which you want to print.
            //This is also known as Ambiguity resolution.
            Base1::greet();
            Base2::greet();
        }
};

class B{
    public:
        void say(){
            cout<<"Hello World"<<endl;
        }
};


class D : public B{
    int a;
    //D's new sa()y method will override base class's say() method.
    public:
        void say(){
            cout<<"Hello my beautiful people"<<endl;
        } 
};

int main() {
    //Ambiguity 1
   /*  Base1 base1obj;
    Base2 base2obj;
    //base1obj.greet();
    //base2obj.greet();
    Derived d;
    d.greet();  // Here this will be ambiguity
 */
    //Ambiguity 2

    //B b; 
    //b.say();

    D d;
    d.say();

    return 0;
}