#include <iostream>
using namespace std;

//recursion: It is used to call untill the condition is not meeting and the recursion is not getting stop.
//Like "Factorial number":
//Ex: 6! = 6 * 5 * 4 * 3 * 2 * 1 = 720
//0! = 1 by definition
//1! = 1 by definition
// By formula = n! = n * (n - 1)!

int factorial (int n) {
    if (n <= 1) {
        return 1;
    }
    //Here we used factorial(n - 1) as a recursive function to call again and again until it reaches to 1.
    return n * factorial(n - 1);
}

//Step by step calculation of factorial 4
//factorial (4) = 4 * factorial(3);
//factorial (4) = 4 * 3 * factorial(2);
//factorial (4) = 4 * 2 * factorial(1);
//factorial (4) = 4 * 2 * 1;
//factoria(4) = 24

int fib(int n) {
    if (n < 2){
        return 1;
    }
    return fib(n-2) + fib(n-1);
}

//start writing your main code
int main(){

    int Value;
    cout<<"Enter the value of which factorial value we have to find: "<<endl;
    cin>>Value;
    //cout<<"The factorial value of "<<Value<<" is: "<<factorial(Value)<<endl;
    cout<<"The term fibonacci sequence at position: "<<Value<<" is: "<<fib(Value)<<endl;
    
    return 0;
}