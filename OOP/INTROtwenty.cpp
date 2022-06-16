#include <iostream>
using namespace std;

//Example of Inheritence & its Different Types with Examples.
/* 
Overview:
-> Reusability is very important feature of OOP
-> In C++ we can reuse a class and add additional fetures to it.
-> Reusing classes saves time and money.
-> Reusing already tested and debugged class will save a lot of effort of developing and debugging the same thing again.
*/

/* What is Inheritance?

-> The concept of Reusability in C++ is supported using inheritence
-> We can reuse the properties of an existing class by inherititing from it.
-> The existence class is called as the Base Class.
-> THe new class which is inherited is called as the Derived Class.
-> Reusing classes saves time and money
-> There are different types of inheritance in C++
 */

/* 
Forms of Inheritance

Single Inheritance = A derived class with only one Base class like: A -> B or Employee --> Programmer
Multiple Inheritance = A derived class with more than one base class like: A, B --> C or Employee, Assistant --> Program
Hierarchical Inheritance = Several derived classes with single base class like: C --> A, B, C or Employee ---> Programmer, Business Executive, Marketing Expert
Multilevel Inheritance = Deriving a class from already derived class like: A --> B --> C or Animal ---> Mammal ---> Cow or Mammal == Animal + more, Cow = mammal + more.
Hybrid Inheritance = 
-> It is a combination of multiple inheritance and multilevel inheritance.
-> A class is derived from two classes as in multiple inheritance.
-> However, one of the parent classes is not a base class.
-> A --> B, C --> D
-> Animal --> Mammal, Bird --> Bat

 */


int main() {

    return 0;
}