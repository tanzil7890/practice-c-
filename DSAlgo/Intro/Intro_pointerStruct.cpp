#include <iostream>
using namespace std;

//Pointer to Structure.
//Pointer takes only 2 bytes.

struct Rectangle
{
    int length;
    int breadth;
};


int main() {

    struct Rectangle *ptr;

    ptr = new Rectangle;    //In C++, to store Rectangle's object in heap dynamically.

    //To store the data in the heap memory dynamically.
    //In C
    //ptr = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    ptr->length = 10;
    ptr->breadth = 5;

    cout<<ptr->breadth<<endl;
    cout<<(*ptr).length<<endl;

   /*  struct Rectangle r = {10, 5};
    struct Rectangle *ptr = &r;

    (*ptr).length = 99; //Using C++ language.
    ptr->length = 20;  //Using C language

    cout<<ptr->length<<endl;
    cout<<(*ptr).breadth<<endl;
 */
    return 0;
}