#include <iostream>
using namespace std;

//Pointers to Objects and Arrow Operators

//Arrow Operators is used to deference and the object and run its function


class Complex {
    int real, imaginary;
    public:
        void getData(){
            cout<<"The real part is "<<real<<endl;
            cout<<"The imaginary part is "<<imaginary<<endl;
        }

        void setData(int a, int b);
};

void Complex :: setData(int a, int b){
    real = a;
    imaginary = b;
}

int main() {
    //Complex c1;
    //Complex *ptr = &c1;
    //This is also the way to make an object.
    Complex *ptr = new Complex;

    //c1.setData(1, 54);
    //c1.getData();
    //Below will be work as the above ptr has the address of c1
    //(*ptr).setData(2, 55); //is exactly same as
    ptr->setData(2, 55);

    //(*ptr).getData(); //is same as
    ptr->getData();


    //Array of an Objects
    Complex *ptr1 = new Complex[3]; // To create an array of an object.
    ptr1->setData(2, 55);
    //(ptr1+1)->setData(3, 56); To store the value at the next array
    ptr1->getData();
    //(ptr1+1)->getData();  To display the value of the next array.

    return 0;
}