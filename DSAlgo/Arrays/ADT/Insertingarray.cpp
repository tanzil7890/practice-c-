#include <iostream>
using namespace std;

//

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

//As it is going to modify the array so the struct call arr should be call by address type *arr.
//This function is used to store the element at the end of the array element.
void Append(struct Array *arr, int x){
    if(arr->length < arr->size)
        arr->A[arr->length++]=x;
    else
        cout<<"Out of the block";
        //exit(0);
}

//To store the element x at the given index
void Insert(struct Array *arr, int index, int x){
    int i;
    if(index>=0 && index<=arr->length)
    {
        for(i=arr->length; i>index; i--)
            arr->A[i]=arr->A[i-1];

        arr->A[index] = x;
        arr->length++;
    }
    
}

int main()
{
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};

    //Append(&arr, 10);
    Insert(&arr, 1, 10);
    Display(arr);

    return 0;
}