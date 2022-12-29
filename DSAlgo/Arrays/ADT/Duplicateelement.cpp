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


//Duplicate Element in Sorted Array
void duplicateSorted(struct Array arr){
    int last_duplicate = 0;
    for (int i = 0; i < arr.length; i++)
    {
        if (arr.A[i] == arr.A[i+1] && arr.A[i]!= last_duplicate)
        {
            cout<<"Duplicate elements are: "<<arr.A[i]<< ",   ";
            last_duplicate=arr.A[i];
        }
        
    }
    
}

void duplicateSortedCount(struct Array arr){
    for (int i = 0; i < arr.length-1; i++)
    {
        if (arr.A[i] == arr.A[i+1]) 
        {
            int j = i+1;
            while (arr.A[i] == arr.A[j]) j++;
            cout<<arr.A[i]<<" is appearing "<< j-i <<" times";
            i=j-1;
        }
        
    }  
}

//Using hashing in sorted array
void hashingDuplicateSorted(struct Array arr, int low, int high){
    int H[100]={0};
    int sz = high+1;
    for (int i = 0; i < arr.length; i++)
    {
        H[arr.A[i]]++;
    }
    for (int  j = low; j <= sz; j++)
    {
        if (H[j]>1)
        {
            cout<<"number "<<j <<" is appearing "<<H[j]<<endl;
        }  
    } 
}


//Findind Duplicate element in Unsorted Array
void duplicateUnsorted(struct Array arr){
    for (int i = 0; i < arr.length; i++)
    {
        int count =1;
        if (arr.A[i] != -1)
        {
            for (int j = i+1; j < arr.length; j++)
            {
                if (arr.A[i] == arr.A[j])
                {
                    count++;
                    arr.A[j]=-1;
                }         
            }
            if (count > 1)
            {
                cout<<arr.A[i]<<"    "<<count<<endl;
            }    
        }      
    }   
}


void duplicateHashUnsorted(struct Array arr, int low, int high){
    int H[100] = {0};
    int sz = high+1;
    for (int i = 0; i < arr.length; i++)
    {
        H[arr.A[i]]++;
    }

    for (int j = 0; j < sz; j++)
    {
        if (H[j] > 1)
        {
            cout<<"Duplicate element "<<j<<" is appearing "<<H[j]<<endl;
        }
        
    }
    
    
}


int main() {

    Array arr1 = {{3, 8, 8, 10, 12, 15, 15, 15, 20, 20}, 100, 10};

    //Finding Duplicate element and count in sorted array calls of the function
    duplicateSorted(arr1);

    cout<<"\n\nFor count:"<<endl;
    duplicateSortedCount(arr1);

    cout<<"\n\nUsing hashing"<<endl;
    int high = biggestElementInArray(arr1);
    int low = smallestElementInArray(arr1);
    hashingDuplicateSorted(arr1, low, high);

    //Finding Duplicate element and count in Unsorted array calls of the function
    Array arr2 = {{8, 3, 6, 4, 6, 5, 6, 8, 4, 7}, 100, 10};
    cout<<"\n\nFinding Duplicate element in Unsorted array"<<endl;
    duplicateUnsorted(arr2);

    cout<<"\n\nUsing Hashing To find Duplicate element in Unsorted array"<<endl;
    int high1 = biggestElementInArray(arr2);
    int low1 = smallestElementInArray(arr2);
    duplicateHashUnsorted(arr2, low1, high1);

    return 0;
}
