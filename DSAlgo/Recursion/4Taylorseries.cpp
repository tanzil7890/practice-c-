#include <iostream>
using namespace std;

//Taylor Series


double e(int x, int n){
    static double p = 1, f =1;
    double r;  // To take the result and r + p/f
    if(n==0){
        return 1;
    }
    else {
        r=e(x, n-1);
        p=p*x;
        f=f*n;
        return (double)r + p/f;
    }
}

// Optimized Taylor series by Horner's rule
// Iterative
// 1 + x/1 + x^2/2! + x^3/3! + x^4/4! + ... + nth term
// 1 + x/1(1 + x/2 + x^2/2*3 + x^3/2*3*4)
// 1 + x/1(1 + x/2(1 + x/3 + x^2/3*4))
// 1 + x/1(1 + x/2(1 + x/3(1 + x/4)))

double e1(int x, int n){
    double s = 1;
    double i;
    double num=1;
    double den=1;
    for(i=1; i<=n; i++)
    {
        num*=x;
        den*=i;
        s+=num/den;
    }
    return s;
}

//using recursion
double e2(int x, int n){
    static int s = 1;
    if(n==0)
        return s;
    s=1+x/n*s;
    return e(x, n-1);
}


int main() {
    cout<<e(4, 10)<<endl;
    cout << e1(1, 10)<<endl;
    cout << e2(1, 10)<<endl;

    return 0;
}