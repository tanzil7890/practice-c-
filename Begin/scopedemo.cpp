#include <iostream>
using namespace std;

int glo =6; //This is a global variable;

void sum(){
    cout<<"Value = "<<glo<<endl;
}

int main(){
    
    int glo =9; //This is a local variable 
    glo =78;
    sum();
    cout<<"The value of glo is : "<<glo<<endl; //In this case the output is : 9. Means local variable takes precedence over global variable
    return 0;
}