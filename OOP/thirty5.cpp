#include <iostream>
using namespace std;

// Pointers to Derived Classes

class BaseClass
{
public:
    int var_base;
    void display()
    {
        cout << "Displaying Base class variable var_base " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{

public:
    int var_derive;
    void display()
    {
        cout << "Displaying Base class variable var_base " << var_base << endl;
        cout << "Displaying Base class variable var_derive " << var_derive << endl;
    }
};

int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived;  //Pointing base class pointer to derive class
    
    base_class_pointer->var_base = 100; //This is how we can store the value inside the variable using  pointer.
    //base_class_pointer->derive_base = 400; //It will show an error.
    base_class_pointer->display();

    base_class_pointer->var_base = 90; 
    base_class_pointer->display();

    DerivedClass *derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_base = 99448;
    derived_class_pointer->var_derive = 88;
    derived_class_pointer->display();
    return 0;
}