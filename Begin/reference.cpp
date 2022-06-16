#include <iostream>

using namespace std;

int var = 20;

int main() {
    int var;
    int take, d, c;
    //cout<<"Give the value of take: "<<endl;
    //cin>>take;
    //var = take + 10;
    //cout<<"The sum of the number is: "<<var<<endl;
    /* The double colon is used as to resolute the global variable and show the output.10 
    This operator is known as scope resolution operator.*/
    //cout<<"The value of var through global resolution: "<<::var<<endl;


    cout<<"New Begin"<<endl;

    float new1 = 289.9;
    long double new2 = 1972.2791;

    //If we 289.9 the compiler will consider this number as a double automatically 
    //So to avoid such scenarios we have to use 289.9f
    //Therefore if we need to use to specify long then we use 289.99l

    // ---------------------------Float, int, long, double, long double literals--------------------------

    cout<<"The size of the value is: "<<sizeof(289.9f)<<endl;
    cout<<"The size of the value is: "<<sizeof(289.9F)<<endl;
    cout<<"The size of the value is: "<<sizeof(289.9l)<<endl;
    cout<<"The size of the value is: "<<sizeof(289.9L)<<endl;

    cout<<"The value of new1 is: "<<new1<<endl<<"The value of new2 is: "<<new2<<endl;

    // ---------------------------Reference Variables--------------------------

    // Tanzil ---> sonu ---> tanzuu -----> mystery
    //It is used to give the reference of one variable to other 
    //like my name is "Tanzil" and my parents call me "sonu" and my friends call me "tanzuu" and I call myself "mystery".
    //But here the value of tanzil will be the same in all the name because other names are used to give reference.

    /* float tanzil = 19;
    float &sonu = tanzil;
    float &tanzuu = tanzil;
    float &mystery = tanzil;

    //Here all the value will be the same
    
    cout<<"The value of Tanzil: "<<tanzil<<endl;
    cout<<"The value of Sonu: "<<sonu<<endl;
    cout<<"The value of tanzuu: "<<tanzuu<<endl;
    cout<<"The value of mystery: "<<mystery<<endl; */

    // ---------------------------Typecasting--------------------------
    
    int vari = 100;
    float vari1 = 2792.94;
    cout<<"The value of vari: "<<(float)vari<<endl;
    cout<<"The value of vari: "<<float(vari)<<endl;
    cout<<"The value of vari1: "<<(int)vari1<<endl;
    cout<<"The value of vari1: "<<int(vari1)<<endl;
    int vari2 = (int)vari1;
    cout<<"The value of vari2: "<<vari2<<endl;

    cout<<"The expression of the two variable: "<<vari + vari1<<endl;
    cout<<"The expression of the two variable: "<<vari + (int)vari1<<endl;
    cout<<"The expression of the two variable: "<<vari + int(vari1)<<endl;





    return 0;
}