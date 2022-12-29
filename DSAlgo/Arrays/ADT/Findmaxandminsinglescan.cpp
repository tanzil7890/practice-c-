#include <iostream>
using namespace std;

struct Array {
    int A[100];
    int size;
    int length;
};

void Display(struct Array arr){
    for (int i = 0; i < arr.length; i++)
    {
        cout<<arr.A[i];
    }
}

void findMaxAndMin(struct Array arr){
    int min = arr.A[0];
    int max = arr.A[0];

    for (int i = 0; i < arr.length; i++)
    {
        if(arr.A[i]< min){
            min = arr.A[i];
        }
        else if (arr.A[i] > max){
            max = arr.A[i];
        }
    }

    cout<<"The Maximum element is: "<<max<<endl;
    cout<<"The Minimum element is: "<<min<<endl;
    
}


int main() {
    Array arr1 = {{5, 8, 3, 9, 6, 2, 50, 7, -1, 4}, 100, 10};
    findMaxAndMin(arr1);


    return 0;
}
