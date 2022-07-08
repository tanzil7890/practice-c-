#include <iostream>
#include <array>
using namespace std;

// Reverse and Shift in an array

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

void Reverse(struct Array arr){
    for (int i = arr.length-1; i >=0; i--)    {
        cout<<arr.A[i]<<"  ";
    }
    cout<<endl;
}

void left_shift(struct Array arr){
    for (int i = 0; i < arr.length; i++)
    {
        arr.A[i] = arr.A[i+1];
        cout<<arr.A[i]<<"  ";
    }
    cout<<endl;
}

int main()
{
    struct Array arr = {{2, 30, 4, 5, 60}, 10, 5};
    Reverse(arr);
    left_shift(arr);
    Display(arr);
    return 0;
}