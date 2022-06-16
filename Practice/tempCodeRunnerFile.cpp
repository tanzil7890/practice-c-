#include <iostream>
using namespace std;

void repeatChecker(int n);

int main(){
    
    int n;
    cin>>n;
    repeatChecker(n);

    return 0;
}

void repeatChecker(int n){
    while(n != 1) {
        cout<<n<<" ----> ";
        if(n%2 == 0) {
            n/=2;
        } else {
            n = 3*n + 1;
        }
    }
    cout<<1;
} 