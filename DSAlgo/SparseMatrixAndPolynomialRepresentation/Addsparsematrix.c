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

struct Sparse *add(struct Sparse *s1, struct Sparse *s2){
    struct Sparse *sum;
    int i, j, k;
    i=j=k=0;
    sum = (struct Sparse *)malloc(sizeof(struct Sparse));
    sum->elm=(struct Element *)malloc((s1->num+s2->num)*sizeof(struct Element));

    while (i<s1->num && j<s2->num)
    {
        if (s1->elm[i].i < s2->elm[j].i)
            sum->elm[k++]=s1->elm[i++];
        else if(s1->elm[i].i > s2->elm[j].i)
            sum->elm[k++] = s2->elm[j++];
        else{
            if(s1->elm[i].j < s2->elm[j].j)
                sum->elm[k++] = s1->elm[i++];
            else if (s1->elm[i].j > s2->elm[j].j)
                sum->elm[k++] = s2->elm[j++];
            else{
                sum->elm[k] = s1->elm[i];
                sum->elm[k++].ele=s1->elm[i++].ele + s2->elm[j++].ele;
            }
        }         
    }
    for(; i<s1->num; i++)
        sum->elm[k++]=s1->elm[i];
    for(;j<s2->num; j++)
        sum->elm[k++]=s1->elm[j];
    
    sum->m=s1->m;
    sum->n=s1->n;
    sum->num = k;
    return sum;

}

int main(){
    struct Sparse s1, s2, *s3;
    Create(&s1);
    Create(&s2);

    s3 = add(&s1, &s2);
    printf("First Matrix\n");
    Display(s1);
    printf("Second Matrix\n");
    Display(s2);
    printf("Sum Matrix\n");
    Display(*s3);

    return 0;
}