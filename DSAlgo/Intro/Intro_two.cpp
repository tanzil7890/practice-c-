#include <iostream>
#include <stdio.h>
using namespace std;

//Array, Array as Parameter : Practice.
/* 
void func(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        //printf("%d -- ", arr[i]);
        //Below this program will change the array number if it is > 0 && less than 10.
        
        if (arr[i]> 0 && arr[i] < 10)
        {
            arr[i] = 0;
        }
        cout << arr[i] << " ";
    }
    
}
 */

//Returning by array example:

//Take * instead of [].
int *func1(int size){
    int *p;
    //p = new int[size];   //You can use this instead.
    p = (int *)malloc(size*sizeof(int));
    for(int i = 0; i<size; i++)
    p[i] = i+1;

    return (p);
}

void func2(int *arr1){
    for (int i = 0;i < 5;i++)
    {
        cout<<arr1[i]<<endl;
    }
    
}

int main(){
    //func2
    int arr2[] = {2, 4, 6, 8, 10};
    func2(arr2);

    for(int x: arr2)
    cout<<x<<" ";
    cout<<endl;

    //func1
    int *A, sz = 7;
    A = func1(sz);
  /*   A[0] = 1;
    A[1] = 111;
    A[2] = 44;
    A[3] = 551;
    A[4] = 99; */

    for (int i = 0; i < sz; i++)
    {
        cout<<A[i]<< " -- " ;
    }

    cout<<endl;

    //cout<<sizeof(A)/sizeof(A[0])<<endl;
    
    //cout<<*A;
}


 /* 
int main() {
    //int arr[10]={2, 7, 1, 7, 8};
    
   
    int size = 5;
    int arr[size] = {2, 7, 1, 900, 8};

    func(arr, size);


    //In C++
   //  for(int x: arr){
   //     cout<<x<<endl;
   // }
 
  
    //In C   
    for (int i = 0; i < 5; i++)
    {
        printf("%d", arr[i]);
    }
     

    return 0;
} 

 */