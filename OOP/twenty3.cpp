#include <iostream>
using namespace std;

//Example of Protected Access modifier

//We are using protected because this can allow data members to be private but a flexibility to get inherited.

class Base {
    protected:
        int a;
    
    private:
        int b;

    public:
        int c = 100;

};
/*

For a Protected member:
                            Public Derivation   Private Derivation  Protected Derivation
    
    1. Private members      Not Inherited       Not Inherited       Not Inherited
    2. Protected members    Protected           Private             Protected
    3. Public members       Public              Private             Protected


   */
class Derived : protected Base{

};


int main() {
    Base b;
    Derived d;
    
    //cout<<b.a;  //We cannot access directly because it is protected
    //cout<<d.a;  //We cannot access directly because it is protected in both base as well as derived class.
    //cout<<b.c;    //We can access directly because it is inside public.
    //cout<<d.c;  //Here we can access directly through Derived class because we are using public visibility mode.
    
    return 0;
}