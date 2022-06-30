#include <iostream>
using namespace std;

//Power using Recursion

int pow(int m, int n){
        if(n==0)
            return 1;
        return pow(m, n-1)*m;
}

//Using for loop for pow(m, n)
int For_pow(int m, int n){
    int i, pow= 1;
    for ( i = 1; i <= n; i++)
    {
        if(n==0){
            return 1;
        }
        else {
            pow = pow * m;
        }
    }
    return pow;
    
}

int pow1(int m, int n){
    if(n==0)
        return 1;
    if(n%2==0)
        return pow1(m*m, n/2);
    else
        return m * pow1(m*m, (n-1)/2);
}

//Using for loop For_pow1(m, n): H.W.
int For_pow1(int m, int n){
    int i, pow=1;
    for(i=1;i<=n; i++){
        if(n==0)
            return 1;
        if(n%2 == 0){
            pow = pow*m*m;
            n=n/2;
        }
        else {
            pow = pow*m*m*m;
            n=(n-1)/2;
        }
        }

    return pow;
    
}

int main() {
    cout<<pow(2, 16)<<endl;
    cout<<pow1(2, 8)<<endl;
    cout << For_pow(2, 8) << endl;
    cout << For_pow1(2, 9) << endl;
    return 0;
}