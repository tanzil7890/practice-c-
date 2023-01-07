#include <stdio.h>
#include <stdlib.h>

struct Element{
    int i;
    int j;
    int ele;
};

struct Sparse{
    int m;
    int n;
    int num;
    struct Element *elm;
};

void Create(struct Sparse *s){
    int i, j, x, d;
    printf("Enter the Dimension:\n");
    scanf("%d %d", &s->m, &s->n);
    printf("Number of non-zero elements");
    scanf("%d", &s->num);
    s->elm = (struct Element *)malloc(s->num*sizeof(struct Element));
    printf("Enter non-zero Elements");
    for ( i = 0; i < s->num; i++)
    {
        scanf("%d %d %d", &s->elm[i].i, &s->elm[i].j, &s->elm[i].ele);
    } 
}


void Display(struct Sparse s){
    int i, j, k=0;
    for ( i = 0; i < s.m; i++)
    {
        for ( j = 0; j < s.n; j++)
        {
            if (i==s.elm[k].i && j==s.elm[k].j)
                printf("%d ", s.elm[k++].ele);
            else
                printf("0 ");           
        }
        printf("\n");        
    }  
}

int main(){
    struct Sparse s;
    Create(&s);
    Display(s);

    return 0;
}