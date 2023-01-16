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


void removeDuplicateLinkedlist(struct Node *p){
    struct Node *q = p->next;

    while (q!=NULL)
    {
        if(p->data != q->data){
            p=q;
            q=q->next;
        }
        else{
            p->next=q->next;
            free(q);
            q=p->next;
        }
    }
    
}

int main(){
    int A[]={10, 10, 10, 20, 30, 40, 40, 50, 60, 60};
    create(A, 10); 
    removeDuplicateLinkedlist(first);
    
    Display(first);

    return 0;
}

