#include <iostream>
using namespace std;

int sum(int a, int b){
    int c = a+b;
    return c;
}

//This will not swap x & y
void swap (int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}

//Call by reference using pointers
//It's like changing something in cloud
void swapPointer (int* x, int* y) { //Here, value of address a & b will store in x & y
    int temp = *x; //Value of address x in temp
    *x = *y;    //Value of address y in x
    *y = temp;  //Value temp in address of y
}

//Call by reference using C++ reference variable
// Example Tanzil -----> sonu ------> TunTun ------> Eliger every name will be reference to only one person's name
//int x = 45;
//int &y = x;   //So anything that will change in y/x will also effect the other variable.

void swapReferenceVar (int &x, int &y) { //Here, value of address a & b will store in x & y
    int temp = x; //Value of address x in temp
    x = y;    //Value of address y in x
    y = temp;  //Value temp in address of y
} 

//Example return reference variable
/* int & swapReferenceVar (int &x, int &y) { //Here, value of address a & b will store in x & y
    int temp = x; //Value of address x in temp
    x = y;    //Value of address y in x
    y = temp;  //Value temp in address of y
    return x;
}
 */

//start writing your main code
int main(){
    int a = 4, b = 5;
    //Here, sum(a, b) is call by value in the program
    cout<<"The sum of a and b is: "<<sum(a, b)<<endl;
    cout<<"The value of a is: "<<a<<" The value of b is: "<< b<<endl;
    //This will not swap a & b
    //swap(a, b);     //Here the value of a & b is copied in swap x & y. So anything change in the swap will not affect the actual value of the a & b.
    
    //Call by reference
    swapPointer(&a, &b); //Here the value of a & b will swap using pointer reference. 
    //Because we are giving the reference of a & b to the pointer to x & y so any change that will occur in swapPointer will reflect to the a & b.

    //return by reference variable
    //swapReferenceVar(a, b) = 766; //Here the value of a & b will swap using reference variable.

    //Basic example of reference variable
    int x = 45;
    int &y = x;
    y = 65;
    cout<<"The value of y: "<<y<<" The value of x is: "<<x<<endl;
    cout<<"The value of a is: "<<a<<" The value of b is: "<< b<<endl;
    
    return 0;
}