#include <iostream>
using namespace std;

// Example of Multilevel Inheritance A --> B --> C (like) GrandFather --> Father --> Son

/*

For a Protected member:
                            Public Derivation   Private Derivation  Protected Derivation

    1. Private members      Not Inherited       Not Inherited       Not Inherited
    2. Protected members    Protected           Private             Protected
    3. Public members       Public              Private             Protected


   */

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void Student ::set_roll_number(int r)
{
    roll_number = r;
}

void Student ::get_roll_number()
{
    cout << "The roll number is: " << roll_number << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks();
};

void Exam ::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}

void Exam ::get_marks()
{
    cout << "The marks obtained in maths are: " << maths << endl;
    cout << "The marks obtained in physics are: " << physics << endl;
}

class Result : public Exam
{
    float percentage;

public:
    void display(void);
};

void Result ::display(void)
{
    get_roll_number();
    get_marks();
    cout << "Your percentage is: " << (maths + physics) / 2 << "%" << endl;
}

int main()
{
    /*
        Notes:
         If we are inheriting B from A and C from B: A --> B --> C
         1. A is the base class for B and B is base class for C.
         2. A --> B --> C is inheritance path.
     */
    Result r1;
    r1.set_roll_number(420);
    r1.set_marks(90.0, 100.0);
    r1.display();

    return 0;
}