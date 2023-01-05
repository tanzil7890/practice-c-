#include <stdio.h>
#include<stdlib.h>

struct LowerTraingle{
    int *A;
    int n;
};

void Set(struct LowerTraingle *m, int i, int j, int ele){
    if(i>=j)
        m->A[(i*(i-1)/2)+(j-1)] = ele;

}

int Get(struct LowerTraingle m, int i, int j){
    if(i>=j)
        return m.A[(i*(i-1)/2)+(j-1)];
    else
        return 0;
}


void Display(struct LowerTraingle m){
    int i, j;
    for (i=1; i<=m.n;i++){
        for ( j = 1; j <= m.n; j++)
        {
            if (i>=j)
                printf("%d ", m.A[(i*(i-1)/2)+(j-1)]);
            else
                printf("0 ");
        }
        printf("\n");   
    }
}


//From column major formula
void colSet(struct LowerTraingle *m, int i, int j, int ele){
    if(i>=j)
    {
        int t = (m->n*(j-1)-((j-2)*(j-1)/2) + (i-j));
        m->A[t] = ele;
    }
}


int colGet(struct LowerTraingle m, int i, int j){
    if(i>=j)
        return m.A[(m.n*(j-1)-((j-2)*(j-1)/2) + (i-j))];
    else
        return 0;
}


void colDisplay(struct LowerTraingle m){
    int i, j;
    for (i=1; i<=m.n;i++){
        for ( j = 1; j <= m.n; j++)
        {
            if (i>=j)
                printf("%d ", m.A[(m.n*(j-1)-((j-2)*(j-1)/2) + (i-j))]);
            else
                printf("0 ");
        }
        printf("\n");   
    }
}

int main(){
    struct LowerTraingle m;
    struct LowerTraingle mm;
    int x, i, j;
    //For row-mojor formula
    /* printf("Enter Dimension");
    scanf("%d", &m.n);
    m.A = (int *)malloc(m.n*(m.n-1)/2 * sizeof(int));

    printf("Enter all elements\n");
    for (i = 1; i <= m.n; i++)
    {
        for (j = 1; j <= m.n; j++)
        {
            scanf("%d", &x);
            Set(&m, i, j, x);
        }
        
    } */

    //For col-major formula
    printf("Enter Dimension");
    scanf("%d", &mm.n);
    mm.A = (int *)malloc(mm.n*(mm.n-1)/2 * sizeof(int));

    printf("Enter all elements\n");
    for (i = 1; i <= mm.n; i++)
    {
        for (j = 1; j <= mm.n; j++)
        {
            scanf("%d", &x);
            colSet(&mm, i, j, x);
        }
        
    }


    printf("\n");
    colDisplay(mm);
    printf("\n For Get Value");
    printf("%d ",colGet(mm, 2, 2));
    

    return 0;
}