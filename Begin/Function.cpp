#include <iostream>
using namespace std;

//Function Prototype
//type function-name (arguments)
int sum(int a, int b); //Acceptable
//int sum(int a,  b); // Not Acceptable
//int sum(int, int); //Acceptable

void greet(void);// Acceptable
//void greet();// Acceptable

//start writing your main code
int main(){
    
    //Here num1 and num2 are actual parameters: these are used to pass in function like sum(num1, num2)
    int num1, num2;
    cout<<"Enter the first number: "<<endl;
    cin>>num1;
    cout<<"Enter the Second number: "<<endl;
    cin>>num2;
    greet();
    cout<<"The sum of the two number is: "<<sum(num1, num2)<<endl;
    return 0;
}

//Here a and b are formal parameters: these are the parameters which are only used in function as an arguments.
int sum(int a, int b){

    //Here, Formal parameters a and b will be taking the value from Actual parameters num1 and num2
    int c = a+b;
    return c;
}

void greet() {
    cout<<"Hello, Good Morning"<<endl;
}
