#include <iostream>
#include <array>
using namespace std;

// Get(), Set(), avg(), max() in an array

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
    struct Array arr = {{2, 30, 4, 5, 60}, 10, 5};
    cout<<Get(arr, 4)<<endl;
    Set(&arr, 3, 200);
    cout<<"The average of the array: "<<Avg(arr)<<endl;
    Max(arr);
    Min(arr);
    cout<<"AVG Total: "<<avgTotal(arr)<<endl;
    Display(arr);

    return 0;
}