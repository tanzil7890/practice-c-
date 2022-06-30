#include <iostream>
using namespace std;

// Fibonacci Series

// Using recursion
int r_fib(int n)
{
    if (n <= 1)
        return n;
    return r_fib(n - 2) + r_fib(n - 1);
}

// Using for Loop
int for_fib(int n)
{
    int t1 = 0, t2 = 1, s = 0, i;
    if (n <= 1)
        return n;
    for (i = 2; i <= n; i++)
    {
        s = t1 + t2;
        t1 = t2;
        t2 = s;
    }
    return s;
}

// Optimized using memoization
/* int F[10];
int m_fib(int n){
    if(n<=1){
        F[n] = n;
        return n;
    }
    else{
        if(F[n-2]==-1)
            F[n-2]=m_fib(n-2);
        if(F[n-1]==-1)
            F[n-1]=m_fib(n-1);

        //F[n] = F[n-2]+F[n-1];
        return F[n-2]+F[n-1];
    }
}
 */

int F[10];

int mfib(int n)
{
    if (n <= 1)
    {
        F[n] = n;
        return n;
    }
    else
    {
        if (F[n - 2] == -1)
            F[n - 2] = mfib(n - 2);
        if (F[n - 1] == -1)
            F[n - 1] = mfib(n - 1);

        return F[n - 2] + F[n - 1];
    }
}

int main()
{
    int i;
    for (i = 0; i < 10; i++)
    {
        F[i] = -1;
    }
    cout << mfib(10) << endl;
    //cout << m_fib(10);
    return 0;
}
