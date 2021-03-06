#include <iostream>
using namespace std;

//Not done.....ś
//Virtual Function

//Work case: IF we are making a pointer object of BaseCLASS and referencing the address of the DERIVED CLASS.
//So while calling the function display it will show the display of BASECLASS instead the display of derivedClass.
//Although if we are making display function of BASECLASS virtual then the display function of DERIVEDCLASS is executed.


class BaseClass
{
public:
    int var_base = 1;
    virtual void display()
    {
        cout << "1 Displaying Base class variable var_base " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{

public:
    int var_derive = 2;
    void display()
    {
        cout << "2 Displaying Base class variable var_base " << var_base << endl;
        cout << "2 Displaying Base class variable var_derive " << var_derive << endl;
    }
};

int main() {
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_class_pointer = &obj_derived;
    base_class_pointer->display();

    return 0;
}