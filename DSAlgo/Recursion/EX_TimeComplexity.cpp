#include <iostream>
using namespace std;

//Example of Time & Space Complexity

//2, 5, 9, 6, 4, 12, 15, 8, 3, 7

//O(n)s
int sum(int A[], int n){
    int s, i;
    s = 0;
    for ( i = 0; i < n; i++)
    {
        s=s+A[i];
    }

    return s;
    
}

//O(n^2)
void Add(int n){
    int i, j;
    int c[n][n], A[n][n], B[n][n];
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            c[i][j] = A[i][j] + B[i][j];
        }
        
    }
    
}

//O(1)
void swap1(int x, int y){
    int t;
    t = x;
    x = y;
    y = t;
}




int main() {
    int arr1[] = {2, 5, 9, 6, 4, 12, 15, 8, 3, 7};
    int size = 10;
    cout<<sum(arr1, size);

    return 0;
}