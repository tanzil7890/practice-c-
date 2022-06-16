#include <iostream>
using namespace std;


int main(){
    //pointers are the data types which holds address of other data types.
    
    int a = 3;
    int *b = &a;
    int *c;
    c = &a;
    

    //& ---> Address of the operator.
    cout<<"The address of the a is: "<<&a<<endl;
    cout<<"The address of the a is: "<<b<<endl;
    cout<<"The address of the a is: "<<c<<endl;

    //* ----> (value at)Dereferencing of the operator.
    cout<<"The value at b is: "<<*b<<endl;
    cout<<"The value at c is: "<<*c<<endl;

    //** ----> pointer-to-pointer: which help to store the address of the pointers.
    //We create pointer-to-pointer to store pointer's address.

    int **d = &b;
    cout<<"The value address at b is: "<<&b<<endl; 
    cout<<"The value address at b is: "<<d<<endl; 
    cout<<"The value address at d is: "<<*d<<endl; 
    cout<<"The value at address value_at(value_at(d)) is: "<<**d<<endl; 


    return 0;
}