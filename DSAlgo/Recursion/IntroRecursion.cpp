#include <iostream>
using namespace std;

//Recursion

//Tail Recursion

void fun(int n){
    if(n>0){
        cout<<n<<" ";
        fun(n-1);
    }
}
//OUput: 5 4 3 2 1

int fun2(int n){
    if(n>0){
        return fun2(n-1)+n;
    }
    return 0;
}
//Output: 15

//int x = 0;    //result will still be the same.
int fun3(int n){
    int x = 0;
    if(n>0){
        x++;
        return fun3(n-1)+x;
    }
    return 0;
}
//Output: 25

//Head Recursion

void Head_fun1(int n){
    if(n>0){
        fun(n-1);
        cout<<n;
    }
}
// Output: 1 2 3 4 5

void Head_fun2(int n){
    int i = 1;
    while(i<=n){
        cout<<i<<" ";
        i++;
    }
}
//Output: 1 2 3 4 5


//Tree Recursion
void fun6(int n){
    if(n>0){
        cout<<n;
        fun6(n-1);
        fun6(n-1);
    }
}
//Output: 3211211

//Indirect Recursion
void funB(int);         //Function Prototype

void funA(int n){
    if(n>0){
        cout<<n<<" ";
        funB(n-1);
    }
}

void funB(int n){
    if(n>1){
        cout<<n<<" ";
        funA(n/2);
    }
}
//Output: 20 19 9 8 4 3 1


//Nested Recursion
int fun7(int n)
{
    if (n > 100)
    {
        return n - 10;
    }
    else
    {
        return fun7(fun7(n + 11));
    }
}

int main() {
    int x = 3;
    fun(x);

    cout<<endl<<fun2(5)<<" ";
    cout<<endl<<fun3(5);
    cout<<endl<<fun3(5)<<endl;

    //Head Recursion
    Head_fun2(5);
    cout<<endl;

    //Tree Recursion
    fun6(3);
    cout<<endl;
    
    //Indirect Recursion
    funA(20);
    cout<<endl;

    //Nested Recursion
    int take = fun7(95);
    cout<<take;

    return 0;
} 