#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

//Static and Dynamic Array


int main() {
    //Static Array
    int A[5]={2,4,6,8,10};

    //Dynamic Array
    int *P, *Q;
    P=(int*)malloc(5*sizeof(int));  //In C
    Q=new int[5];   //In C++: new keyword is used to access the dynamic/heap memory

    //How it can be accessed
    A[0]=10;    //In static array
    for (int i = 0; i < 5; i++)
    {
        printf("%d", A[i]);
    }
    cout<<endl;
    
    //In dynamic array
    Q[0]=3;
    Q[1]=5;
    Q[2]=7;
    Q[3]=9;
    Q[4]=11;
    for (int i = 0; i < 5; i++)
    {
        printf("%d", Q[i]);
    }

    return 0;
}