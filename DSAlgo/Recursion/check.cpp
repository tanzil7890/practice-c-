#include <iostream>
#include <stdio.h>
using namespace std;

//OutPut Question's Recursion
/*
void foo(int n, int sum)
{
    int k = 0, j = 0;
    if (n == 0)
        return;
    k = n % 10;
    j = n / 10;
    sum = sum + k;
    foo(j, sum);
    cout<<k<<" ";
}
//2 0 4 8 0

int main(){
    int a = 2048, sum = 0;
    foo(a, sum);
    cout<< sum<<endl;;
}
 */

//Correct
/* int f(int &x, int c)
{
    c = c-1;
    if (c == 0)
        return 1;
    x = x + 1;
    return f(x, c) * x;
}
//6561

int main(){
    int p =5;
    cout<<f(p,p);
}
*/

//Not attempted
int fun(int n)
{
    int x = 1, k;
    if (n == 1)
        return x;
    for (k = 1; k < n; ++k)
        x = x + fun(k) * fun(n- k);
    return x;
}
//51

int main()
{
    cout<<fun(5);
} 
/* 
void count(int n)
{
    static int d = 1;
    cout<<n;
    cout<<d;
    //printf("%d", n);
    //printf("%d", d);
    d++;
    if (n > 1)
        count(n - 1);

    cout<<d;
    //printf("%d", d);
}
//31

int main()
{
    count(3);
    return 0;
} */
//312213444

/* 
int f(int n)
{
    static int i = 1;
    if(n >= 5) return n;
    n = n + i;
    i++;
    return f(n);
}
int main()
{
    //cout<<f(1);     //7
    return 0;
}
*/