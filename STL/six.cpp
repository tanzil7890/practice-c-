#include <iostream>
#include <functional>
#include <algorithm>    
using namespace std;

//Function Objects (Functors) in STL
//Function wrapped in a class so that it is available like an object.


int main() {
    int arr[] = {11, 3, 44, 12, 84, 7};
    //sort(arr, arr+6);     //To sort in ascending order.
    sort(arr, arr+6, greater<int>());   //To sort array in descending order.
    
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}