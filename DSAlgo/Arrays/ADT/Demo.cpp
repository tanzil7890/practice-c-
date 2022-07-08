#include <iostream>
using namespace std;

//Array ADT

struct Array{
    //int *A;
    int B[20];
    int size;
    int length;
};

void display(struct Array arr){
    int i;
    cout<<"Elements are\n";
    for (i = 0; i < arr.length; i++)
    {   
        //cout<<arr.A[i]<<" ";
        cout<<arr.B[i]<<" ";
    } 
}

int main() {
    struct Array arr={{2, 3, 4, 5, 6}, 20, 5};
/*
    int n, i;
   cout<<"Enter size of an array: "<<endl;
    //scanf("%d", &arr.size);
    cin>>arr.size;
    arr.A=new int[arr.size];
    arr.length=0;
   
    cout<<"Enter number of numbers"<<endl;
    cin>>n;

    cout<<"Enter all elements: "<<endl;
    for ( i = 0; i < n; i++)
    {
        cin>>arr.B[i];
    }

    arr.length=n;
*/    
    display(arr);

    return 0;
}