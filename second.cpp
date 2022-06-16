#include <iostream>
using namespace std;

int forNewFile(){
    int a = 10;
    int b = 20;
    int add = a + b;
    return add;
}

int main () {
    cout<<"Get the working project"<<endl;
    int i;
    for (i =0; i<=5; i++) {
        cout<<"Hello World"<<endl;
    }
    int takeTheValue = forNewFile() + 10;
    cout<<"The Value from the new file: "<<takeTheValue<<endl;
    return 0;
}