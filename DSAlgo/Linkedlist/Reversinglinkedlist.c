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

int count(struct Node *p){
    int c=0;
    while (p!=NULL)
    {
        c++;
        p=p->next;
    }
    return c;
    
}

void reverseUsingElement(struct Node *p){
    int *A, i=0;
    struct Node *q=p;
    A=(int *)malloc(sizeof(int)*count(p));

    while (q!=NULL)
    {
        A[i]=q->data;
        q=q->next;
        i++;
    }
    q=p;
    i--;
    while (q!=NULL)
    {
        q->data=A[i];
        q=q->next;
        i--;
        
    }
}


void reversingUsingLinking(struct Node *p){
    struct Node *q=NULL,*r=NULL;
    while (p!=NULL)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    first = q;  
}

void reversingUsingRecursive(struct Node *q, struct Node *p){
    if(p!=NULL){
        reversingUsingRecursive(p, p->next);
        p->next=q;
    }
    else{
        first=q;
    }
}


int main(){
    int A[]={100, 90, 80, 70, 60, 50, 40, 30, 20, 10};
    create(A, 10);
    //reverseUsingElement(first);
    //reversingUsingLinking(first);
    reversingUsingRecursive(NULL, first);

    Display(first);

    return 0;
}