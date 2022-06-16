#include <iostream>
//iomanip is used for manipulators
#include <iomanip>
using namespace std;

const float pi = 3.14;
int main(){

    cout<<"The value of pi: "<<pi<<endl;
    int vari = 3, vari1 = 24, vari2= 256, vari3 = 456788;
    //--------------Manipulators---------------------
    //setw() is one of the manipulators to add the width of the space, setprecision() is the second manipulators which help to print the value with precision.

    
    cout<<"The value of vari: "<<vari<<endl;
    cout<<"The value of vari1: "<<vari1<<endl;
    cout<<"The value of vari2: "<<vari2<<endl;

    cout<<"The value of varia: "<<setw(4)<<vari<<endl;    
    cout<<"The value of vari1: "<<setw(4)<<vari1<<endl;    
    cout<<"The value of vari2: "<<setw(4)<<vari2<<endl;    
    cout<<"The value of vari3: "<<setw(4)<<vari3<<endl;    


    return 0;
}