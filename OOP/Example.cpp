#include <iostream>
#include <cmath>
using namespace std;

//Example / Exercise of till now

/* 
Question needed to be done:

Create 2 Classes:
    1. Simple Calculator - Take input of 2 numbers using a utility function and perform +, -, *, / and
    display the results using another function.
    2. Scientific Calculator - Takes input of 2 numbers using a utility function and performs any four 
    scientific operation of your choice and display the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    1. What type of Inheritance are you studying?
    2. Which mode of Inheritance are you using?
    3. Create an object of HybridCalculator and display results of simple and scientific calculator.
    4. How is code reusability implemented?


 */

class SimpleCalculator{
    protected:
        int num1, num2;

public:
    int addition;
    // SimpleCalculator() {}
    // SimpleCalculator(int a, int b);
    void get_data(int a, int b);
    void show_simple_calculator();

};

//Given Value inside the constructor
/* SimpleCalculator :: SimpleCalculator(int a, int b){
    num1 = a;
    num2 = b;
    addition = num1 + num2;
}
 */

void SimpleCalculator :: get_data(int a, int b){
    num1 = a;
    num2 = b;
}

void SimpleCalculator :: show_simple_calculator()
{
    cout<<"The addition of two numbers: "<<num1 + num2<<endl;
    cout << "The Subtraction of two numbers: " << num1 - num2 << endl;
    cout << "The Multiplication of two numbers: " << num1 * num2 << endl;
    cout << "The division of two numbers: " << num1 / num2 << endl;
}

class ScientificCalculator{
    protected:
        int num1;
        int num2;
    
    public:
        //ScientificCalculator(){}
        //ScientificCalculator(int a, int b);
        void get_data1(int a, int b){
            num1 = a;
            num2 = b;
        }
        void show_scientific_calculator();
};

/* ScientificCalculator :: ScientificCalculator(int a, int b){
    num1 = a;
    num2 = b;
}
 */
void ScientificCalculator :: show_scientific_calculator()
{
    cout<<"The power of two numbers is: "<<pow(num1, num2)<<endl;
    cout<<"The square root of num1: "<<sqrt(num1)<<" and num2: "<<sqrt(num2)<<endl;
    cout<<"The exponential of num1: "<<exp(num1)<<" and num2: "<<exp(num2)<<endl;
    int rad1 = num1 * 3.14 / 180;
    int rad2 = num2 * 3.14 / 180;
    cout<<"The sine of num1: "<<sin(rad1)<<" and num2 "<<sin(rad2)<<endl;
}

class HybridCalculator : public SimpleCalculator, public ScientificCalculator {
    public:
        
        /* void show_all(){
            cout<<"Below are the value for hybrid data:"<<endl;
            get_data(10, 20);
            show_simple_calculator();
            
            
        } */
};


int main() {
    int num1, num2;
    /* cout<<"Give the first number: "<<endl;
    cin>>num1;
    cout<<"Give the second number: "<<endl;
    cin>>num2; */
    //ScientificCalculator s1;
    //s1 = ScientificCalculator(num1, num2);
    //s1.show_scientific_calculator();
    
    HybridCalculator s111;
    s111.get_data(10, 20);
    s111.show_simple_calculator();
    cout<<"\n\n";
    s111.get_data1(10, 20);
    s111.show_scientific_calculator();

    return 0;
}