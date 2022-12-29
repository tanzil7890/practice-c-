#include <iostream>
#include <stdio.h>
using namespace std;

//

struct Array
{
    int *A;
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

//Linear Search
void swap(int *x, int *y){
    int temp = *x;
    *x=*y;
    *y=temp;
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

int Get(struct Array arr, int index){
    //if(index>arr.length)
    if (index >= 0 && index < arr.length)
        return arr.A[index];
    else
        return -1;
}

void Set(struct Array *arr, int index, int newValue){
    if(index>arr->length)
        cout<<"Index out of range"<<endl;
    else   
        arr->A[index] = newValue;
}

float Avg(struct Array arr){
    float total=0, avg=0, count=0;
    for(int i=0; i<arr.length; i++){
        total = total + arr.A[i];
        count++;
    }   
    avg=total/count;
    return (float)avg;
}

void Max(struct Array arr){
    int max=arr.A[0];
    for (int i = 1; i < arr.length; i++)
    {
        if(arr.A[i] > max)
             max=arr.A[i];
    }
    cout<<"Maximum of the array: "<<max<<endl; 
}

void Min(struct Array arr){
    int min=arr.A[0];
    for (int i = 0; i < arr.length; i++)
    {
        if(arr.A[i]<min)
            min=arr.A[i];
    }
   cout<<"Minimum of the array: "<<min<<endl;
}

int Total(struct Array arr){
    int total=0;
    for (int i = 0; i < arr.length; i++)
    {
        total=total+arr.A[i];
    }
    return total;
}

int avgTotal(struct Array arr){
    return (float )Total(arr)/arr.length;
}




int main()
{
    struct Array arr1;
    int ch;
    int x, index;
    cout<<"Enter Size of Array";
    scanf("%d", &arr1.size);
    arr1.A=(int *)malloc(arr1.size*sizeof(int));
    do{
        cout<<"Menu\n";
        cout<<"1. Insert \n";
        cout<<"2. Delete \n";
        cout<<"3. Search \n";
        cout<<"4. Sum \n";
        cout<<"5. Display \n";
        cout<<"6. Exit \n";

        cout<<"Enter your choice ";
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            cout<<"Enter an element an index ";
            scanf("%d%d", &x, &index);
            Insert(&arr1, index, x);
            break;
        case 2:
            cout<<"Enter index ";
            scanf("%d", &index);
            x=Delete(&arr1, index);
            cout<<"Deleted Element is: "<<x;
            break;
        case 3:
            cout<<"Enter an element to search ";
            scanf("%d", &x);
            index = LinearSearchMovetoHead(&arr1, x);
            cout<<"Element index: "<<index;
            break;
        case 4:
            cout<<"Sum of all the element of array: "<<Total(arr1);
            break;
        case 5:
            Display(arr1);
            
        }
    } while(ch<6);

    

    return 0;
}