#include <iostream>
using namespace std;

//For sorted array, for Union

struct Array
{
    int A[10];
    int size;
    int lenght;
};

void display(struct Array arr){
    int i;
    for (i = 0; i < arr.lenght; i++){
        cout<< arr.A[i]<< " ";
    }
}

struct Array *Union(struct Array *arr1, struct Array *arr2){
    int i=0, j=0, k=0;
    struct Array *arr3 = new struct Array;
    while (i < arr1->lenght && j < arr2-> lenght){
        if (arr1 -> A[i] < arr2->A[j])
        {
            arr3->A[k++] = arr1->A[i++];
        }
        else if (arr2->A[j] < arr1-> A[i]){
            arr3->A[k++] = arr2->A[j++];
        }
        else {
            arr3->A[k++] = arr1-> A[i++];
            j++;
        }
    }
    for (; i< arr1->lenght; i++)
        arr3->A[k++] = arr1->A[i++];
    for(; j<arr2->lenght; j++)
        arr3->A[k++] = arr1->A[j++];
    
    arr3->lenght = k;
    arr3->size = 10;

    return arr3;

};

//For sorted array, for Intersection
struct Array *Intersection(struct Array *arr1, struct Array *arr2){
    int i=0, j=0, k=0;
    struct Array *arr3 = new struct Array;
    while (i < arr1->lenght && j < arr2-> lenght){
        if (arr1 -> A[i] < arr2->A[j])
            i++;
        else if (arr2->A[j] < arr1-> A[i])
            j++;
        else if (arr1->A[i] == arr2->A[j]){
            arr3->A[k++] = arr1->A[i++];
            j++;
        }
    }
    
    arr3->lenght = k;
    arr3->size = 10;

    return arr3;

};


//For sorted array, for Difference A-B
struct Array *Difference(struct Array *arr1, struct Array *arr2){
    int i=0, j=0, k=0;
    struct Array *arr3 = new struct Array;
    while (i < arr1->lenght && j < arr2-> lenght){
        if (arr1 -> A[i] < arr2->A[j])
            arr3->A[k++] = arr1->A[i++];
        else if (arr2->A[j] < arr1-> A[i])
            j++;
        else {
            i++;
            j++;
        }
    }
    for (; i< arr1->lenght; i++)
        arr3->A[k++] = arr1->A[i++];
    
    arr3->lenght = k;
    arr3->size = 10;

    return arr3;

};

int main() {
    struct Array arr1 = {{2, 6, 10, 15, 25}, 10, 5};
    struct Array arr2 = {{3, 6, 7, 15, 20}, 10, 5};
    struct Array *arr3;
    //arr3 =Union(&arr1, &arr2);
    //arr3 =Intersection(&arr1, &arr2);
    arr3 =Difference(&arr1, &arr2);
    display(*arr3);
    

    return 0;
}
