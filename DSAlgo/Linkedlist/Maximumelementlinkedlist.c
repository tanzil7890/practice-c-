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

//To find maximum element in the Linkedlist
int Max(struct Node *p){
    int m = INT32_MIN;
    while(p!=NULL){
        if(p->data >m)
            m=p->data;
        
        p=p->next;
    }
    return m;
}

//Recursively
int RMax(struct Node *p){
    int x = 0;
    if(p==0)
        return INT32_MIN;
    else{
        x = RMax(p->next);
        if(x > p->data)
            return x;
        else
            return p->data;
    }
}


int main(){
    int A[]={3, 35, 7, 10, 15, 25};
    create(A, 6);
    Display(first);
    printf("\nThe maximum element in the ARRAY: ");
    printf("%d \n", Max(first));
    printf("\nThe maximum element in the ARRAY: ");
    printf("%d ", RMax(first));
    

    return 0;
}


