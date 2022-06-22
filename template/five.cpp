#include <iostream>
using namespace std;

//Function Template

/*
Syntax:
template <typename T>   //Here typename is the keyword and T is the argument.

T add1(T a, T b){
    return a+b;
}

int main(){
    //add<dataType>(10, 20);
    add<int>(10, 20);
    add<float>(10, 20);
}

 */

template <class T1, class T2>

float average(T1 a, T2 b){
    float getValue = (a + b) / 2; 
    return getValue;
}

template <class T3>
void swap1(T3 &x, T3 &y)
{
    T3 temp = x;
    x = y;
    y = temp;
}

int main() {
    cout<<average<int, int>(10, 20)<<endl;
    cout << average<double, double>(45.89, 58.94)<<endl;
    
    float a = 5.5, b = 7.7;
    swap1<float>(a, b);
    cout<<a<<endl<<b<<endl;
    return 0;
}