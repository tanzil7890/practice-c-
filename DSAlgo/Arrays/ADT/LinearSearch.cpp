#include <iostream>
using namespace std;

// Linear Search in an array

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

int LinearSearch(struct Array arr, int key){
    int i;
    for ( i = 0; i < arr.length; i++)
    {
        if(key==arr.A[i])
            return i;
    }
    return -1;
}

void swap(int *x, int *y){
    int temp = *x;
    *x=*y;
    *y=temp;
}

int LinearSearchTranspose(struct Array *arr, int key){
    int i;
    for ( i = 0; i < arr->length; i++)
    {
        if(key==arr->A[i])
        {
            swap(&arr->A[i], &arr->A[i-1]);
            return i;
        }
    }
    return -1;
}

int LinearSearchMovetoHead(struct Array *arr, int key){
    int i;
    for ( i = 0; i < arr->length; i++)
    {
        if(key==arr->A[i]){
            swap(arr->A[i], arr->A[0]);
            return 0;
        }
    }
    return -1;
}

int main()
{
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};

    cout<<LinearSearch(arr, 5)<<endl;
    cout << LinearSearchTranspose(&arr, 5) << endl;
    cout << LinearSearchMovetoHead(&arr, 5) << endl;
    Display(arr);

    return 0;
}