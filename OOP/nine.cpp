#include <iostream>
using namespace std;

//1 + 4i
//4 + 8i
//----------
//5 + 12i

//Properties of Firend Function
/* 
1. Not in the scope of class.
2. Since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplec() => is invalid. 
3. Can be invoked without the help of any object.
4. Usually contains the object as arguments.
5. Can be declared inside public and private function of the class.
6. It cannot access the members by their names and need object_name.member_name
 */
//Example Friend Function
class Complex {
    int a, b;
    public:
        void setNumber(int n1, int n2){
            a = n1;
            b = n2;
        }
        //Below line means that sumComplex function is allowed to do anthing with my private (members)
        friend Complex sumComplex(Complex o1, Complex o2);
        void printNumber(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

Complex sumComplex(Complex o1, Complex o2){
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));

    return o3;
}

//start writing your main code
int main(){
    Complex c1, c2, sum;
    c1.setNumber(1, 4);
    c1.printNumber();
    c2.setNumber(5, 8);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();

    return 0;
}