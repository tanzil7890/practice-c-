#include <iostream>
using namespace std;

// Example of Constructor in Derived Class.
/* 
--> We can use constructors in derived classes in c++
--> If base class constructor does not have any argument, there is no need of any constructor in derived class.
--> But if there are one or more argument in the base class constructor, derived class need to pass arguments to the base class constructor
--> If both base and derived classes have constructors, base class constructor is executed first.
 */
/* 
Constructor in Multiple inheritance( A, B --> C ):

--> In multiple inheritance, base classes are constructed in the order in which they appear in the class declaration.
--> In multilevel '', the constructor are executed in the order of inheritance. 
 */
/* 
Special Syntax:

--> C++ supports an special syntax for passing arguments to multiple base classes 
--> The constructor of the derived class receives all the arguments at once and then will pass the calls to the respective base classes.
--> The body is called after all the construction are finished executing.

Derived-Cosntructor(arg1, arg2, arg3. .....): Base1-Constructor(arg1, ag2), Base2-Constructor(arg3, arg4){

} Base1-Constructor(arg1, arg2)
 */
/* 
Special Case of Virtual Base Class:

--> The constructor for virtual base classes are invoked before an non-virtual base class.
--> If there are multiple base classes, they are invoked in the order declared.
--> Any non-virtual base class are then constructed before the derived class constructor is executed.
 */

int main() {

    return 0;
}