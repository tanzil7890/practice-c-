#include <bits/stdc++.h>
using namespace std;

//Tower of hanoi

typedef long long ll;

void TOH(int n, int A, int B, int C){
    int count=0;
    if(n>0){
        count++;
        TOH(n-1, A, C, B);
        cout<<"Front "<<A<<" to: "<<C<<" "<<endl;
        

        TOH(n-1, B, A, C);
    }
    count<<count;

}

int main() {
    TOH(5, 1, 2, 3);
    

    return 0;
}