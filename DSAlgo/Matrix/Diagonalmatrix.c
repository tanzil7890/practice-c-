//#include <iostream>
#include <stdio.h>
//using namespace std;


struct Matrix{
    int A[10];
    int n;
};

// *m becuase we are going to modify the matrix
void Set(struct Matrix *m, int i, int j, int ele){
    if(i==j){
        m->A[i-1]=ele;
    }
}

int Get(struct Matrix m, int i, int j){
    if(i==j){
        return m.A[i-1];
    }
    else{
        return 0;
    }
}


void Display(struct Matrix m){
    int i, j;
    for (i=0; i<m.n;i++){
        for ( j = 0; j < m.n; j++)
        {
            if (i==j)
                printf("%d ", m.A[i]);
            else
                printf("0 ");
        }
        printf("\n");
        
    }
}

int main() {
    struct Matrix m;
    m.n=4;
    Set(&m,1,1, 5);
    Set(&m,2,2, 8);
    Set(&m,3,3, 9);
    Set(&m,4,4, 12);

    Display(m);

    return 0;
}


/* 
#include<stdio.h>
struct matrix
{
    int n;
    int A[10];
};
void set(struct matrix *a,int i,int j,int x)
{
    if(i==j)
    {
        a->A[i-1]=x;
    }

}

int Get(struct matrix *a,int i,int j)
{
    if(i==j)
        return a->A[i-1];
    else
        return 0;
}


void Display(struct matrix *a)
{
    for(int i=0;i<(a->n);i++)
    {
        for(int j=0;j<(a->n);j++)
        {
            if(i==j)
            printf("%d ",a->A[i]);
            else
            printf("%d ",0);
        }
        printf("\n");
    }
}
int main()
{
    struct matrix m;
    m.n=4;
    set(&m,1,1,7);
    set(&m,2,2,5);
    set(&m,3,3,6);
    set(&m,4,4,3);
    printf("%d \n", Get(&m, 3,3));
    Display(&m);

    return 0;
}
 */