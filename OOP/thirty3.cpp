#include <iostream>
using namespace std;

//this pointer
//This is a keyword which is a pointer which points to the object which invoke the member function

class A{
    int a;
    public:
        //we can use the same data member name by using this keyword.
        /* void setData(int a){
            this->a = a;
        } */
    
        A & setData(int a){
            this->a = a;
            return *this;   //Here it is returning an object.
        }

        void getData();
};

void A :: getData(){
    cout<<"The value of a is "<< a<<endl;
}


int main() {
    A a;
    //a.setData(10);
    //a.getData();

    //or else

    a.setData(10).getData();

    return 0;
}