#include <iostream>
using namespace std;

//Structures as Functions

struct Rectangle {
    int length;
    int breadth;
};

void initialize(struct Rectangle *r, int len, int bread){
    r->length = len;
    r->breadth = bread;
}

int area(struct Rectangle r){
    return r.length * r.breadth;
}

void changeLength(struct Rectangle *r, int newLen){
    r->length = newLen;
}

int main() {
    struct Rectangle r;
    initialize(&r, 10, 5);

    cout<<area(r)<<endl;

    changeLength(&r, 20);
    cout<<area(r)<<endl;

    return 0;
}