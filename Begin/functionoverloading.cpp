#include <iostream>
using namespace std;
/* 
int add (int a, int b) {
    return a+b;
}

int add (int a, int b, int c) {
    return a+b+c;
}
 */

//Calculate the volume of cylinder
//Calculate the volume of cylinder
int volume(int r, int h) {
    return (3.14 * (r * r) * h);
}

//Calculate the volume of cube
int volume(int a){
    return (a * a * a);
}

//Calculate the volume of rectangle
int volume(int l, int b, int h){
    return (l * b * h);
}


//start writing your main code
int main(){
    //cout<<"The sum of the 3 and 6 is: "<<add(3, 6)<<endl;
    //cout<<"The sum of the 3, 6, and 7 is: "<<add(3, 6, 7)<<endl;
    
    cout<<"The volume of cylinder: "<<volume(3, 6)<<endl;
    cout<<"The volume of cube: "<<volume(5)<<endl;
    cout<<"The volume of rectangle: "<<volume(3, 6, 7)<<endl;


    return 0;
}