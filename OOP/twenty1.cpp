#include <iostream>
using namespace std;

//Inheritance syntax and visibility mode in C++

class Employee {    //Base class

    public:
    int id;
    float salary;
        Employee(){}
        Employee(int empId){
            id = empId;
            salary = 34.0;
        }

};

//Derived Class Syntax
/* 
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc
}
 */

// If we are using public as a visibility mode than base class public member will become public member of the derived class.
// If we are using private as a visibility mode than base class public member will become private member of the derived class.
//((Note:)) Default visibility code is always {{private}}
// 2. Public Visibility Mode: {Public} members of the base class becomes {Public} members of the derived class.
// 3. Pivate Visibility: {Public} members of the base class becomes {Private} members of the derived class.
//((Note)): We cannot inherit the private member of the base class in derived class.

// Creating a Programmer class derived from Employee from Base Class
class Programmer : Employee {
    public:
        int languageCode;
        Programmer(int empId, float sal){
            id = empId;
            salary = sal;
            languageCode = 9;
        }

        void getData(){
            cout<<id<<endl<<salary<<endl;
        }
};

int main() {
    Employee harry(1), rohan(2);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;

    Programmer skillF(10, 900.0);
    cout<<skillF.languageCode<<endl;
    //below we can use if we are using public as a visibility mode to access the members.
    //cout << skillF.id << endl;
    //cout<< skillF.salary<<endl;
    skillF.getData();

    return 0;
}