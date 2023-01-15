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


int Count(struct Node *p){
    int c=0;
    while (p!=NULL)
    {
        c++;
        p=p->next;
    }
    return c; 
}


void Insert(struct Node *p, int index, int x){
    struct Node *t;
    if(index < 0 || index > Count(first))
        return;
    
    t=(struct Node *)malloc(sizeof(struct Node));
    t->data=x;

    if(index == 0){
        t->next = first;
        first = t;
    }
    else{
        for (int i = 0; i < index-1 && p; i++)
            p=p->next;

        t->next = p->next;
        p->next = t;
    }
}

int main(){
    /* int A[]={3, 35, 7};
    create(A, 3); */
    Insert(first, 0, 10);
    //Insert(first, 4, 10);
    //Insert(first, 5, 10);
    Display(first);

    return 0;
}

