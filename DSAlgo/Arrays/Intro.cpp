#include <iostream>
using namespace std;

//Arrays, declaring and Initializing


int main() {
    int A[5];   //Garbage values will be stores
    /* int A1[5] = {2, 4, 6, 8, 10};   // 2 3 6 8 10 will be stored
    int A2[10]={2,4};   //2 4 0 0 0 0 0 0 0 
    int A3[5] = {0};    //0 0 0 0 0
    int A4[] = {2, 4, 6, 8, 10, 12};    //2 4 6 8 10 12 will stored.
 */
    //Traverse an array
    for (int i = 0; i < 5; i++)
    {
        printf("%u\n", A[i]);
    }
    

    return 0;
}