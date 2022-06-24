#include <iostream>
using namespace std;

//Converting the Intro_EX.cpp to Intro_OOP.cpp
/* 
class Rectangle{
    private:
    int length;
    int breadth;
    public:
        Rectangle(int l, int b){
            length = l;
            breadth = b;
        }

        int area(){
            return length * breadth;
        }

        int perimeter(){
            return 2*(length + breadth);
        }

}; 
*/
 
struct Rectangle{
    int length;
    int breadth;

    void initialise(int l, int b){
        length = l;
        breadth = b;
    }

    int area(){
        return length * breadth;
    }

    int perimeter(){
        return 2*(length+breadth);
    }
};


int main() {
    //structure

    Rectangle r;
    int l, b;
    cout<<"Enter length and breadth: "<<endl;
    cin>>l>>b;
    r.initialise(l, b);
    int a = r.area();
    int peri = r.perimeter();
    cout<<"Area: "<<a<<endl<<"Perimeter: "<<peri<<endl;

/* 
    Rectangle r(10, 5);
    r.area();
    r.perimeter();
 */
    return 0;
}