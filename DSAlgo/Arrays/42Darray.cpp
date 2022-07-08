#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

//2D Array


int main() {
    //First method
    int A[3][4]={{1, 2, 3, 4}, {2, 4, 6, 8}, {1, 3, 5, 7}};
    
    int i, j;

    // To print the 2D array A[][]
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cout << A[i][j] << " ";
        }
        printf("\n");
    }

    cout<<endl<<endl;
    //Second method
    int *B[3];
    //In C
    //B[0]=(int *)malloc(4*sizeof(int));
    //B[1] = (int *)malloc(4 * sizeof(int));
    //B[2] = (int *)malloc(4 * sizeof(int));

    //In C++
    B[0]=new int[4];
    B[1]=new int[4];
    B[2]=new int[4];

    // To print the 2D array of B[][]
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cout << B[i][j] << " ";
        }
        printf("\n");
    }

    cout<<endl<<endl;
    //Third method
    int **C;

    //In C++
    C=new int*[3]; 
    C[0]=new int[4];
    C[1] = new int[4];
    C[2] = new int[4];

    //In C
    //C=(int **)malloc(3*sizeof(int *));
    //C[0] = (int *)malloc(4 * sizeof(int));
    //C[1] = (int *)malloc(4 * sizeof(int));
    //C[2] = (int *)malloc(4 * sizeof(int));

    //To print the 2D array C[][]
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            cout<<C[i][j]<<" ";
        }
        printf("\n");
        
    }
    

    return 0;
}