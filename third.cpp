#include <iostream>
#include <cmath>
using namespace std;

int a = 100;

int sum(int a, int b) {
    int get = a + b;
    return get;
}

int getting_Root(int a) {
    int root = sqrt(a);
    return root;
}

void calculate_Expected_Value(double chancePer, double chanceGet, int numberOfTimes) {
    double ev = (chancePer/100) * chanceGet * numberOfTimes;
    cout<<"\n\nThe Expected value: "<<ev<<endl; 
}

void useRoot(int valForRoot) {
    int evaluate = getting_Root(36) + sum(10, 20) * valForRoot;
    cout<<"The evaluated value of the root and sum of the two function: "<<evaluate<<endl;
    cout<<"Value of the root is useRoot: "<<getting_Root(36)<<endl;
}

void newMan(int getNewMan){
    int evaluate = ((getting_Root(49) * 244) / 42) * getting_Root(getNewMan);
    cout<<"Output from the evaluation of the topic: "<<evaluate<<endl; 
}

int main() {
    int a = 10;
    cout<<"The final value: "<<a;
    cout<<"\n\nafter new line the arrow";
    sum(10, 20);
    int value;
    cout<<"Enter the value you want to take square root of: "<<endl;
    cin>>value;
    cout<<"Getting only the root: "<<getting_Root(value);
    calculate_Expected_Value(2, 20, 2);
    useRoot(10);
    newMan(52);
    return 0;
}