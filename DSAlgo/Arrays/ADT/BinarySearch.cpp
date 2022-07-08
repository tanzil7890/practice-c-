#include <iostream>
using namespace std;

// Binary Search in an array

struct Array
{
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr)
{
    int i;
    cout << "Elements are\n";
    for (i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << " ";
    }
}

//Binary Search using Iteration
int BinarySearch(struct Array arr, int key){
    int mid, l=0, h=arr.length-1;
    while(l<=h){
        mid=(l+h)/2;
        if(key==arr.A[mid])
            return mid;
        else if(key<arr.A[mid])
            h=mid-1;
        else
            l=mid+1;
    }
    return -1;
}

//Binary Search using Recursion
int RBinSearch(int a[], int l, int h, int key){
    int mid;
    if(l<=h){
        mid=(l+h)/2;
        if(key==a[mid])
            return mid;
        else if(key<a[mid])
            return RBinSearch(a, l, mid-1, key);
        else
            return RBinSearch(a, mid+1, h, key);
    }

    return -1;
}

int main()
{
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};
    
    cout<<BinarySearch(arr, 12)<<endl;
    cout<<RBinSearch(arr.A, 0, arr.length-1, 4)<<endl;
    Display(arr);

    return 0;
}