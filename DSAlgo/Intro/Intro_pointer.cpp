#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

//Pointers(also known as address variable): Pointers is the variable which is meant for storing the address.
//To access the {heap memory}, {or resources which are outside the program}, and {parameter passing} we use pointers.

//int *p;   //Address variable
//p = &a;   //Initialization: In which address of the a is going to p.

struct Rectangle
{
    int length;
    int breadth;
};


int main() {

    int *p3;
    char *p4;
    float *p5;
    double *p6;
    struct Rectangle *p7;

    cout<<sizeof(p3)<<endl;
    cout << sizeof(p4) << endl;
    cout << sizeof(p5) << endl;
    cout << sizeof(p6) << endl;
    cout << sizeof(p7) << endl;

    //for working on heap memory by the C.
    int *p2;
    p2 = (int *)malloc(5*sizeof(int));
    p2[0] = 11;
    p2[1] = 22;
    p2[2] = 33;
    p2[3] = 44;
    p2[4] = 55;

    for (int i = 0; i < 5; i++)
    {
        printf("%d <--> ", p2[i]);
    }
    printf("\n New array\n");
    
    
    int arr1[5] = {2, 4, 6, 8, 10};
    int *p1;
    //p1 = &arr1[0];    //This code is similar to the p1 = arr1;
    p1 = arr1;  //If we are working on array then we don't need to reference the array to the pointer to get the address.

    for (int i = 0; i < 5; i++)
    {
        cout<<p1[i]<<" <--> ";
    }

    cout<<endl;

    int a = 10;
    int *p;
    p = new int[5];
    /* 
    p[0] = 10;
    p[1] = 20; 
    */
    cout<<"Giving the array: "<<endl;
    for (int i = 0; i < 5; i++)
    {
        cin>>p[i];
    }
    
    cout<<endl;

    //printf("%d", a);
    //printf("Using Pointer %d %d %d",a, *p, p);
    for (int i = 0; i < 5; i++)
    {
        cout<<p[i]<<" ";
    }
    
    //cout<<"Using Pointer in C++ "<<*p;

    free(p);    //To free the memory in C.

    delete [ ] p;   //Whenever we are dynamically allocating the memory we should release the memory by delete function.
    //For array we should use delete [ ] p; for normal we should use delete the p;.

    return 0;
}