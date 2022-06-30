#include <iostream>
using namespace std;

//Sum of First 'n' Natural Number

//By using recursive function / Recursion
int sum(int n){
    if(n==0)
    {
        return 0;
    }
    else{
        return sum(n-1)+n;
    }
}
// Time: O(n) 
// The space will be more than all of them because it will create (n+1) activation stack in the memory.

//By using formula loop
int sum1(int n){
    return n*(n+1)/2;
}
// Time & Space Complexity: O(1)

//Using for loop
int sum2(int n){
    int i, sum = 0;
    for ( i = 1; i <=n; i++)
    {
        sum=sum+i;
    }
    return sum;
    
}
//Time & Space Complexity: O(n)

//Using While loop
int sum3(int n){
    int i=0, sum = 0;
    while (i<=n)
    {
        sum = sum+i;
        i++;
    }
    return sum;
}
// Time & Space Complexity: O(n)

int main() {
    cout<<sum(10)<<endl;
    cout << sum1(10)<<endl;
    cout<<sum2(10)<<endl;
    cout << sum3(10) << endl;

    return 0;
}