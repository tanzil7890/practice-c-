#include <iostream>
using namespace std;

//Why we use struct instead of array for storing multiple value: because stuct help to store any kind of value like number, char, float, string.

//We are using typedef in struct employee to state as a ep

//Unions are similar to the structure but it provide better memory management. It is used for better management. 
//In this you can use any one of the features rice, car, and pounds.IF one of the features is selected like rice = 20 and after pounds = 30.0 then it will be overwritten by pounds.

/* typedef struct employee
{
    int eId;
    char favChar;
    float salary;
} ep; */

struct employee
{
    int eId;
    char favChar;
    float salary;
};

union money
{
    int rice;
    char car;
    float pounds;
};

int main(){

    enum Meal { breakfast, lunch, dinner };

    //Here m2 will become the data type of the Meal
    Meal m2 = breakfast;
    cout<<"The value of m2: "<<(m2==0)<<endl;
    
    /* cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl; */


    union money m1;
    m1.rice = 13;
    m1.car = 'T';
    
    //In union we can use one value at a time. Because our memory is being shared in union.

    cout<<m1.rice<<endl; // Here we will not get the m1.rice value, instead we will get garbage value
    cout<<m1.car<<endl; // Here we will not get the m1.car value 

    //ep ryan;
    //ep shubam;
    //ep newPerson;

    /* struct employee ryan;
    struct employee shubam;
    struct employee newPerson;
    
    ryan.eId = 1;
    ryan.favChar = 'R';
    ryan.salary = 12000;
    shubam.eId = 2;
    shubam.favChar = 'T';
    shubam.salary = 5000;
    cout<<"The value of employee id is: "<<ryan.eId<<endl;
    cout<<"The value of fav character is: "<<ryan.favChar<<endl;
    cout<<"The value of salary is: "<<ryan.salary<<endl;
    cout<<"The second value of employee id is: "<<shubam.eId<<endl;
    cout<<"The second value of fav character is: "<<shubam.favChar<<endl;
    cout<<"The second value of salary is: "<<shubam.salary<<endl; */

    return 0;
}