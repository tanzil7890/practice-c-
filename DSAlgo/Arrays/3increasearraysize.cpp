#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

//Increase Array size dynamically.


int main() {
    int *p, *q;
    //p=new int[5];
    p=(int *)malloc(5*sizeof(int));
    p[0] = 3;
    p[1] = 5;
    p[2] = 7;
    p[3] = 9;
    p[4] = 11;
    
    cout<<endl;

    q=(int *)malloc(10*sizeof(int));
    //q = new int[10];

    //To add all the element of the p to q (student transferring from smaller --> bigger room)
    for (int i = 0; i < 5; i++)
        q[i]=p[i];

    free(p);    //Memory deallocated
    p=q;
    q=NULL;
    for (int i = 0; i < 5; i++)
        cout<<p[i];

    // delete []p; //To avoid memory leak
    // p=q;    //Here to point p to q
    // q=NULL; //Making the value q pointer NULL
    // cout<<sizeof(p)<<endl;

    return 0;
}