#include <iostream>
using namespace std;

//

int factorial(int n){
    int prod=1, i;
    for ( i = 1; i <= n; i++)
    {
        if(i==0){
            return 1;
        }else{
            prod=prod*i;
        }
    }
    return prod;
}

int Comb(int n, int r){
    int t1, t2, t3;
    t1=factorial(n);
    t2=factorial(r);
    t3=factorial(n-r);

    return t1/(t2*t3);
}

int main() {
    //cout<<fact1(10)<<endl;
    cout<<Comb(18, 4);

    return 0;
}