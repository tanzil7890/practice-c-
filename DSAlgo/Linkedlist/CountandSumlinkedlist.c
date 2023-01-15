#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;  //pointer name
}*first;    //This is the pointer of itself, which makes it a global pointer

void create(int A[], int n){
    int i;
    struct Node *t, *last;
    first=(struct Node *)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    last=first; //last point on first node.

    for ( i = 1; i < n; i++)
    {
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next = t;
        last = t;
    }
    
}

void Display(struct Node *p){
    while (p!=NULL)
    {
        printf("%d ", p->data);
        p=p->next;
    }
    
}

//For Counting Number of Node present in the linkedlist

int Count(struct Node *p){
    int c=0;
    while (p!=NULL)
    {
        c++;
        p=p->next;
    }
    return c;
    
}

//Recursive function for count
int RCount(struct Node *p){
    if(p==0)
        return 0;
    else
        return RCount(p->next)+1;
}

//For sum of the all the data present in the linkedlist
int Sum(struct Node *p){
    int sum = 0;
    while (p!=NULL)
    {
        sum+=p->data;
        p=p->next;
    }
    return sum;  
}

//Recursive function for Sum
int RSum(struct Node *p){
    if(p==0)
        return 0;
    else
        return RSum(p->next)+p->data;

}




int main(){
    int A[]={3, 5, 7, 10, 15};
    create(A, 5);
    Display(first);
    printf("\n");
    printf("%d ",Count(first));
    printf("\n");
    printf("%d ",RCount(first));
    printf("\nFor the Sum\n");
    printf("%d ",Sum(first));
    printf("\nFor the RSum\n");
    printf("%d ",RSum(first));

    return 0;
}