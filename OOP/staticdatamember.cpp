#include <iostream>
using namespace std;

// if we are using static variable than it automatically initialized as a 0 value.
// static variable is used to avoid the count of each object and give the output basis on all objects.
// if we are not using static variable then there will be count of each objects.
// static variable is also known as a class variable.
// static variable is only one and it is shared by all the object of the class.

// Example of static data member
class Employee
{
    int id;

    // count is the static data member of the class Employee.
    static int count; // In static variable we cannot assign value here

public:
    void setData(void)
    {
        cout << "Enter the id: " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The Employee id is: " << id << " and this is employee number " << count << endl;
    }
    static void getCount(void) {
        cout<<"The value of the count is "<<count<<endl;
    }
};

int Employee ::count; // Instead we can assign value here like ex: int Employee :: count = 1000;   //Default value is 0

// start writing your main code
int main()
{
    Employee mister1, mister2, mister3;
    // cannot do this as id and count are private members of the class
    // mister1.id = 1;     //cannot do this because it is private members of the class
    // mister1.count = 1;     //cannot do this because it is private members of the class

    mister1.setData();
    mister1.getData();
    Employee::getCount();
    

    mister2.setData();
    mister2.getData();
    Employee::getCount();

    mister3.setData();
    mister3.getData();
    Employee::getCount();

    return 0;
}