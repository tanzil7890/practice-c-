/* #include <iostream>
using namespace std;

int repeatCheck(int n);

int main(){
    
    int n;
    cin>>n;
    int take = repeatCheck(n);

    if(take != 1){
        repeatCheck(take);
    }

    return 0;
}

int repeatCheck(int n){

    cout<<n<<"-->";
    
    if(n%2 == 0) {
        return n/2;
    } 
    else if(n%2 != 0){
        return n*3 + 1;
    }

    
} */
/* 
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    while (n != 1) {
        cout << n << " ";
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
    }
    cout << 1;
} */

 #include <iostream>
using namespace std;


int main(){ 
    long long n;
    cin>>n;
    while(n!=1) {
        cout<<n <<" ---> ";
        if(n%2 == 0){
            n/=2;
        } else {
            n = 3 * n + 1;
        }
    }
    cout<< 1;
}

 /* #include <iostream>
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
}  */