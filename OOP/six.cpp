#include <iostream>
using namespace std;

// Array of Objects & Passing Objects as Function Arguments.
class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        // here every time I am setting the id the default value of salary will automatically set to 122.
        salary = 122;
        cout << "Enter the id of the Employee ";
        cin >> id;
    }

    void getId(void)
    {
        cout << "The id of this employee is " << id << endl;
        cout << "The salary of this employee is " << salary << endl;
    }
};

// start writing your main code
int main()
{
    // Employee master1, master2, master3, master4;
    // master1.setId();
    // master1.getId();

    // This is the use of Array of Object
    Employee master[4];
    for (int i = 0; i < 4; i++)
    {
        master[i].setId();
        master[i].getId();
    }

    return 0;
}