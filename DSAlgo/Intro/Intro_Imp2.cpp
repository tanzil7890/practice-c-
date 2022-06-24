#include <iostream>
using namespace std;

//Class & Constructor from Structure of Intro_Imp.cpp file

class Rectangle{
    int length;
    int breadth;

public:
    //Constructor to create/ initialize the data member.
    Rectangle(int l, int b){
        length = l;
        breadth = b;
    }
     
    int area(){
        return length * breadth;
    }

    void changeLength(int newLen){
        length = newLen;
    }
};




int main() {
    Rectangle r(10, 5);
    
    cout<<r.area();
    r.changeLength(20);

    return 0;
}