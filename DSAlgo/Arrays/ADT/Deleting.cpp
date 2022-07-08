#include <iostream>
using namespace std;

//Deleting in an array

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

int Delete(struct Array *arr, int index){
    int i, x=0;
    
    if(index>=0 && index<arr->length){
        x = arr->A[index];
        for(i=index; i<arr->length-1; i++)
            arr->A[i]=arr->A[i+1];
        
        arr->length--;
        return x;   //To return the deleted element
    }
    return 0;
}

int main()
{
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};

    cout<<Delete(&arr, 4)<<endl;

    Display(arr);

    return 0;
}