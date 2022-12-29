#include <iostream>
using namespace std;

struct Array{
    int A[100];
    int size;
    int length;
};

void Display(struct Array arr){
    for (int i = 0; i < arr.length; i++)
    {
        cout<<arr.A[i];
    }
}

void missingSorted(struct Array arr){
    int sum = 0;
    int n = arr.A[arr.length-1];
    for (int i = 0; i<arr.length; i++){
        sum = sum + arr.A[i];
    }
    int s = n*(n+1)/2;
    int missing = s - sum;
    cout<<"Missing element is: "<<missing;
}

void missingForAnySequenceSorted(struct Array arr, int low, int high){
    int diff = low - 0;
    for (int i =0; i <arr.length; i++){
        if (arr.A[i]-i != diff)
        {
            cout<<"Missing element: "<<i+diff<<endl;
            break;
        }
    }
}

void multipleMissingSorted(struct Array arr, int low1, int high1){
    int diff = low1 - 0;
    for (int i = 0; i < arr.length; i++){
        if(arr.A[i]-i !=diff){
            while(diff<arr.A[i]-i)
            {
                cout<<"Missing element: "<<i+diff<<endl;
                diff++;
            }
        }
    }
}

int biggestElementInArray(struct Array arr){
    int high = arr.A[0];
    for (int i = 0; i< arr.length; i++){
        if (high < arr.A[i])
        {
            high= arr.A[i];
            
        }
    }
    return high;
}

int smallestElementInArray(struct Array arr){
    int low = arr.A[0];
    for (int i = 0; i < arr.length; i++)
    {
        if (low > arr.A[i])
        {
            low = arr.A[i];
        }  
    }
    return low;  
}

//Unsorted

void multipleMissingUnsorted(struct Array arr, int low2, int high2){
    int sz = high2 +1;
    int A1[20]={0};
    for(int i=0;i<arr.length;i++)
        A1[arr.A[i]]++;
    for(int i=low2;i<sz;i++)
    {
        if(A1[i]==0)
            cout<<"element "<<i<< " is missing"<<endl;
    }
}

int main() {
    Array arr1={{1, 2, 3, 4, 5, 6, 8, 9, 10, 11, 12}, 100, 11};

    //Finding Single element in sorted array
    missingSorted(arr1);    //Method 1

    //For any sequence Find Single element in sorted array
    cout<<"\n\nFor any sequence Find Single element in sorted array"<< endl;
    Array arr2 = {{6, 7, 8, 9, 10, 11,12, 13, 14, 15,  17}, 100, 11};
    int low = arr2.A[0];
    int high = arr2.A[arr2.length-1];
    //cout<<low<< high<<endl;
    missingForAnySequenceSorted(arr2, low, high);   //Method 2

    //Find Multiple missing element using sorted array
    cout<<"\nFind Multiple missing element using sorted array"<<endl;
    Array arr3 = {{6, 7, 8, 9, 11,12, 15, 16, 17, 18, 19}, 100, 11};
    int low1 = arr3.A[0];
    int high1 = arr3.A[arr3.length-1];
    multipleMissingSorted(arr3, low1, high1);    //Method 3

    //Find multiple missing element in unsorted array
    cout<<"\nFind multiple missing element in unsorted array"<<endl;
    Array arr4 = {{3, 7, 4, 9, 19, 6, 1, 11, 2, 10}, 100, 10};
    int high2 = biggestElementInArray(arr4);
    int low2 = smallestElementInArray(arr4);
    //cout<<low2<<endl;
    multipleMissingUnsorted(arr4, low2, high2);








    return 0;
}
