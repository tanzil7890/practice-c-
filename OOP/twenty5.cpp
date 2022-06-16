#include <iostream>
using namespace std;

//Example of Multiple Inheritance: A(Base Class) <--- B, C (Derived Class)

class Exam {
    protected:
        float math, physics;

    public:
        void set_marks(float m1, float m2){
            math = m1;
            physics = m2;
        }

        void get_marks(void){
            cout<<"The marks of Math are: "<<math<<endl;
            cout<<"The marks of Physics are: "<<physics<<endl;
        } 
};

class Result{
    protected:
        int subjects;
    public:
        void set_subjects(int sub){
            subjects = sub;
        }
};

class Student : public Exam, public Result{
    int id;
    float percentage = 0;
    public:
        void set_id(int);
        void get_id(void);
        void calculate(void);
        void display_data_of_student(void);
};

void Student :: set_id(int roll){
    id = roll;
}

void Student :: get_id(){
    cout<<"The roll number of the student is: "<<id<<endl;
}

void Student :: calculate(){
    percentage = (math + physics) / subjects;
    cout<<"The percentage of the student: "<< percentage<<endl;
    
}

void Student :: display_data_of_student(void){
    set_id(420);
    get_id();
    set_marks(90.0, 97.0);
    get_marks();
    set_subjects(2);
    calculate();
}


int main() {
    Student newComer;
    
    newComer.display_data_of_student();
    

    return 0;
}