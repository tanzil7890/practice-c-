#include <iostream>
using namespace std;

//Factorial

//Using Recursion
int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return fact(n-1) * n;
    }
}

//Using For loop
int fact1(int n){
    int i, prod = 1;
    for ( i = 1; i <= n; i++)
    {
        if(i == 0 ){
            return 1;
        }
        else{
            prod = prod * i;
        }
        
    }
    return prod;  
}

//Using While loop
int fact2(int n){
    int i = 1, prod =1;
    while (i<=n)
    {
        if(i == 0){
            return 1;
        }
        else {
            prod = prod * i;
        }
        i++;
    }
    return prod;
    
}

int main() {
    cout<<fact(10)<<endl;
    cout << fact1(10)<<endl;
    cout << fact2(10)<<endl;
    return 0;
} 