#include <iostream>
using namespace std;

//THERE ARE THREE TYPES OF ACCESS SPECIFIERS: LIKE 1) PUBLIC 2) PRIVATE 3) PROTECTED

/* 
class Employee {

    private:
        int a, b, c;
    public:
        int d, e;
        void setData(int a, int b, int c);  //Declaration
        void getData(){
            cout<<"The value of a is: "<<a<<endl;
            cout<<"The value of b is: "<<b<<endl;
            cout<<"The value of c is: "<<c<<endl;
            cout<<"The value of d is: "<<d<<endl;
            cout<<"The value of e is: "<<e<<endl;
        }

};

void Employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

 */
/* 
class Employee {

    private:
        int a, b, c;
    public:
        int d, e;
        void setData(int a, int b, int c);  //Declaration
        void getData();

};

void Employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}
void Employee :: getData(){
    cout<<"The value of a is: "<<a<<endl;
    cout<<"The value of b is: "<<b<<endl;
    cout<<"The value of c is: "<<c<<endl;
    cout<<"The value of d is: "<<d<<endl;
    cout<<"The value of e is: "<<e<<endl;
}


//start writing your main code
int main(){
    Employee harry;
    harry.d = 23;
    harry.e = 64;
    harry.setData(1, 2, 3);
    harry.getData();
    return 0;
} */

class College {
    private:
        float studentID;
        int rollNo;
        int collegeAccept;
    
    public:
        int collegeApplied;
        void showFinalResult(float id, int rno, int cAccept);
        void refereshResult();
};

void College :: showFinalResult(float id, int rno, int cAccept){
    studentID = id;
    rollNo = rno;
    collegeAccept = cAccept;
}

void College :: refereshResult() {
    cout<<"The student id of the student: "<<studentID<<endl;
    cout<<"The Roll No of the student: "<<rollNo<<endl;
    cout<<"The number of the college in which student got accepted: "<<collegeAccept<<endl;
    cout<< "The number of college in which student has applied: "<<collegeApplied<<endl;
}


int main() {
    College Anas;
    Anas.collegeApplied = 20;
    Anas.showFinalResult(19.234, 29, 10);
    Anas.refereshResult();

    return 0;
}