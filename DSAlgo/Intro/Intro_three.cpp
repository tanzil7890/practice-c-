#include <iostream>
#include <stdio.h>
using namespace std;

// Structure, Structure as Parameter: Practice

struct Rectangle
{
    int length; // Integer take 4 bytes
    int breadth;
    char x; // 2 bytes for character
} r;        // This is also variable declaration as a global.

int area(struct Rectangle r1)
{
    r1.length = 11;
    return r1.length * r1.breadth;
}

/*

int main() {
    // For area()
    struct Rectangle r = {10, 5};
    // Passing Structure's object
    cout << area(r);

    struct Rectangle r1={10, 5};
    r1.length = 20;
    r1.breadth = 50;
    cout<<r1.length<<" "<<r1.breadth<<endl;

    //printf("%lu", sizeof(r1));

    return 0;
} */

struct Test
{
    int arr[5];
    int n;
};

void func1(struct Test t1)
{
    cout << "Before:" << endl;
    cout << "t1.arr[0]: " << t1.arr[0] << endl;
    cout << "t1.arr[1]: " << t1.arr[1] << endl;
    t1.arr[0] = 1;
    t1.arr[1] = 99;
    cout << "After:" << endl;
    cout << "t1.arr[0]: " << t1.arr[0] << endl;
    cout << "t1.arr[1]: " << t1.arr[1] << endl;
}

void changeLength(struct Rectangle *r2){
    r2->length = 99;
}

//So this program is demonstrating how function can return a pointer to an object created in a heap and
//that can be accessed using mean function also it can be accessed by any function of that point.
struct Rectangle *fun(){    //This is returning an address of the structure.
    struct Rectangle *p;
    p = new Rectangle;
    //p = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    p->length = 15;
    p->breadth = 7;

    return p;
}


// Passing structure as Parameter example.
int main()
{
    // For struct Rectangle *fun()
    struct Rectangle *ptr = fun();
    cout<<"length: "<<ptr->length<<endl<<"breadth: "<<ptr->breadth<<endl;

    //for changeLength()
    struct Rectangle r = {10, 5};
    changeLength(&r);
    cout<<"r.length: "<<r.length<<endl;

    // for func1()
    struct Test t = {{2, 5, 8, 11, 14}, 5};
    func1(t);

    return 0;
 
}

