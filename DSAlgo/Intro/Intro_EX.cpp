#include <iostream>
#include <stdio.h>
using namespace std;

//Modular & Monolithic Programming
/* 
//Monolithic
int main()
{
    int length = 0, breadth = 0;
    printf("Enter Length and Breadth");
    cin >> length >> breadth;
    int area = length * breadth;
    int peri = 2 * (length + breadth);
    printf("Area=%d\nPerimeter-%d\n", area, peri);
    return 0;
}  
 */

//Modular

struct Rectangle{
    int length;
    int breadth;
};

void initialise(Rectangle *r, int l, int b){
    r->length = l;
    r->breadth = b;
}

int area(Rectangle r)
{
    return r.length * r.breadth;
}

int perimeter(Rectangle r)
{
    int p;
    p = 2 * (r.length + r.breadth);
    return p;
}


int main()
{
    struct Rectangle r={0, 0};
    int l, b;
    printf("Enter Length and Breadth");
    cin>>l>>b;
    initialise(&r, l, b);
    //initialise(&r, r.length, r.breadth); 
    int a = area(r);
    int peri = perimeter(r);
    printf("Area-%d\nPerimeter-%d\n", a, peri);
    return 0;
}