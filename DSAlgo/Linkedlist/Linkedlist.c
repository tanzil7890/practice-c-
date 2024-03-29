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

//This recursive way of Displaying Linkedlist.
void recursiveWayDisplay(struct Node *p){
    if (p!=NULL)
    {
        printf("%d ", p->data);
        recursiveWayDisplay(p->next);
    }
    
}

//For reversing the LinkedList
void recursiveWayReversing(struct Node *p){
    if (p!=NULL)
    {
        recursiveWayDisplay(p->next);
        printf("%d ", p->data);
    }
    
}



int main(){
    int A[]={3, 5, 7, 10, 15};
    create(A, 5);
    Display(first);
    printf("\n");
    recursiveWayDisplay(first);

    return 0;
}