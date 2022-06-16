#include <iostream>
using namespace std;

// Example of Virtual Base Class: To resolve ambiguity.
// Ex: A --> B, C --> D : Here if A has a variable so it will go to all B & C but after B & C it will go to D.
// In this process the A a will b copied to both B & C, so after copying from B & C to D. After D will have two a's which will be
//difficult to judge by D that whose a is it. So it will create the Ambiguity. To solve the issue we use Virtual Base class.
/*
ex:
//Here A is a virtual base class.

class A{

};

class B : virtual public A{

};

class C : virtual public A{

};

class D : public B, public C{

};

 */

//We are going to do: Student ---> Test, Sports ---> Result
//We are going to make Student as a Virtual Base Class because by this Result will ensure that it will not inherit Student data members and cause ambiguity.

/* 
Inheritance:

student --> test
student --> sports
test --> result
sports --> result
 */

class Student{
    protected:
        int roll_no;
    
    public:
        void set_number(int a){
            roll_no = a;
        }

        void print_number(void){
            cout<<"Your roll number is: "<<roll_no<<endl;
        }
};

class Test : virtual public Student{
    protected:
        float maths, physics;

    public:
        void set_marks(float m1, float m2){
            maths = m1;
            physics = m2;
        }

        void print_marks(void){
            cout<<"Your result is here: "<<"Maths: "<<maths<<" Physics: "<<physics<<endl;
        }    
};

class Sports : virtual public Student {
    protected:
        float score;
    
    public:
        void set_score(float sc){
            score = sc;
        }

        void print_score(void){
            cout<<"Your PT score is "<<score<<endl;
        }
};

class Result : public Test, public Sports{
    private:
        float total;
    
    public:
        void display(void){
            total = maths + physics + score;
            print_number();
            print_marks();
            print_score();
            cout<<"Your total score is: "<<total<<endl;

        }
};

int main() {
    //We solved the ambiguity: If we were not using virtual then roll_no would have been come two times.
    
    Result s1;
    s1.set_number(4200);
    s1.set_marks(78.9, 99.5);
    s1.set_score(4);
    s1.display();
    return 0;
}