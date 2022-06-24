#include <iostream>
using namespace std;

//Function, Parameter Passing method - Practice
//Everything inside the single block of function is known as: Monolithic Programming.
//Therefore functions in different blocks known as: Modular/ Procedural Programming.

int add(int a, int b){
    return a+b;
}

//Swapping by call by address
/* void swap(int *x, int *y){
    cout <<"Before: " <<*x << " " << *y << endl;
    int temp = *x;
    *x = *y;
    *y = temp;
   
}
 */

//Swapping by call by reference

void swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    //cout<<add(10, 20);

    //Parameter Passing
    int a = 10, b = 20;
    //swap(&a, &b); //Call by address
    swap(a, b);     //Call by reference.
    cout << a << " " << b << endl;

    int p = 9;
    int *r = &p;
    //++(*r);
    int c = ((++(*r)) + (++(*r)));
    
    cout << c << " " << p;

    return 0;
}