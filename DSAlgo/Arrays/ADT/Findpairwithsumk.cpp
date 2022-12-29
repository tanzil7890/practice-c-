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

void pairForSum(struct Array arr, int k){
    for (int i = 0; i < arr.length-1; i++)
    {
        for (int j = i+1; j < arr.length; j++)
        {
            if (arr.A[i] + arr.A[j] == k)
            {
                cout<<arr.A[i]<<" + "<<arr.A[j]<<" = "<< k<<endl;
            }
            
        }
        
    }
    
}

//Using Hashing (Faster Method)

void pairForSumHash(struct Array arr,int low, int high, int k){
    int h = high +1;
    int H[100] = {0};
    for (int i = 0; i < arr.length-1; i++)
    {
        if (H[k - arr.A[i]] != 0)
        {
            cout<<arr.A[i]<< " + "<< k-arr.A[i]<< " = "<<k<<endl;
        }
        H[arr.A[i]]++;
    }
    
}


//In Sorted Array
void pairSumSorted(struct Array arr, int k){
    int i = 0; 
    int j = arr.length-1;
    while (i < j){
        if(arr.A[i] + arr.A[j] == k)
        {
            cout<<arr.A[i]<<" + "<<arr.A[j]<<" = "<<k<<endl;
            i++;
            j--;
        }
        else if(arr.A[i] + arr.A[j] < k)
            i++;
        else
            j--;
    }
}


void pairSumSortedForLoop(struct Array arr, int k){
    int j;
    for (int i = 0, j = arr.length-1; i<j;)
    {
        if (arr.A[i] + arr.A[j]==k)
        {
            cout<<arr.A[i]<<" + "<<arr.A[j]<<" = "<< k<< endl;
            i++;
            j--;
        }
        else if (arr.A[i]+ arr.A[j]<k)
            i++;
        else
            j--;
    }
    
}



int main() {
    Array arr1 = {{6, 3, 8, 10,16, 7, 5, 2, 9, 14}, 100, 10};
    pairForSum(arr1, 10);

    cout<<"\n\nUsing Hashing"<<endl;
    int high = biggestElementInArray(arr1);
    int low = smallestElementInArray(arr1);
    pairForSumHash(arr1, low, high, 10);

    //Find pair of sum k in sorted array
    Array arr2 = {{1, 3, 4, 5, 6, 8, 9, 10, 12, 14}, 100, 10};
    cout<<"\n\nIn Sorted Array"<<endl;
    pairSumSorted(arr2, 10);

    cout<<"\n\nIn Sorted Array For loop"<<endl;
    pairSumSortedForLoop(arr2, 10);

    return 0;
}
