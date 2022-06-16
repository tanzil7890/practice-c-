#include <iostream>
using namespace std;

//When we use inline function? It is used to reduce the time of compilation. It is majorly used for executing the small problems.
//Note: We should never use inline function for the large problems because it will take to much size then the actual problem.
//When we should not use inline function: In recursion, in static variable, 
//If you are making a function unecessarily inline then it will show an error.
/* inline int product(int a, int b) {
    return a*b;
}
 */

//Example of static variable.
//Here the value of c will not be 0 each time it is called, but the value of c will be incremented each time it is called because of the change in value by c = c + 1;

inline int product(int a, int b) {
    static int c = 0;   //This will execute only once    //first time the value of c will be 2 in calling, second time the value of c will be 4 in calling, third time the value of c will be 6 and so on.....
    c = c+2;    //Next time the value of c will be retained as the function run
    return a*b+c;
}

//Here, float factor = 1.04 is default argument. Default argument is the argument is the argument which get default value if no value is passed.
float moneyReceived(int currentMoney, float factor=1.04) {
    return currentMoney * factor;
}

//Constant argument is used so the value stored inside the const variable should not change.
/* int strlenght(const char* p) {

} */

//start writing your main code
int main(){

    /*int a, b;
    cout<<"Enter the value of a & b: "<<endl;
    cin>>a>>b;

    cout<<"The product of the a & b is: "<<product(a, b)<<endl;
    cout<<"The product of the a & b is: "<<product(a, b)<<endl;
    cout<<"The product of the a & b is: "<<product(a, b)<<endl;
    cout<<"The product of the a & b is: "<<product(a, b)<<endl;
    cout<<"The product of the a & b is: "<<product(a, b)<<endl;
    cout<<"The product of the a & b is: "<<product(a, b)<<endl; */

    int money=100000;
    cout<<"If you have this "<<money<<" Rs then you will receive "<<moneyReceived(money)<<" Rs after 1 year."<<endl;
    cout<<"For VIP: If you have this "<<money<<" Rs then you will receive "<<moneyReceived(money, 1.1)<<" Rs after 1 year.";
    
    return 0;
}