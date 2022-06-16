#include <iostream>
using namespace std;

//Pointers : new & delete keywords


int main() {
    /* 
    Basic Example:
    int a = 4;
    int* ptr = &a;

     */
    int a = 4;
    int *ptr = &a;
    *ptr = 999;
    cout<<"The value of a is "<<*(ptr)<<endl;

    //new Operator/Keyword

    //int *p = new int(40);   //Here, new keyword help to dynamically create and initialize 40 at the address of p
    float *p = new float(40.780);
    cout<<"The value at address p is "<<*(p)<<endl;

    //To allocate block of memory of size of int using array creation.
    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    //*(arr+1) = 20     //Same as above but using pointer.
    arr[2] = 30;
    //delete[] arr;
    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;

    //delete operator/keyword


    return 0;
}