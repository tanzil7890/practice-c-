#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;  //pointer name
}*first, *last;    //This is the pointer of itself, which makes it a global pointer

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

void InsertLast(int x){
    struct Node *t;
    t=(struct Node *)malloc(sizeof(struct Node));
    t->data=x;
    t->next=NULL;
    if(first == NULL)
    {
        first=t;
        last=t;
    }
    else{
        last->next=t;
        last=t;
    }
}
//Time Complexity: O(1)


/* 
void InsertLast2(struct Node *p, int x){
    struct Node *t;
    t= (struct Node *)malloc(sizeof(struct Node));
    t->data=x;
    t->next=NULL;

    while(p->next != NULL){
        p=p->next;
    }
    p->next=t;
}
 */
int main(){
    /* int A[]={3, 35, 7};
    create(A, 3); */

    InsertLast(10);
    InsertLast(10);
    InsertLast(10);
    
    /* 
    InsertLast2(first, 10);
    InsertLast2(first, 20);
    InsertLast2(first, 30);
    InsertLast2(first, 40);
     */
    //Insert(first, 4, 10);
    //Insert(first, 5, 10);
    Display(first);

    return 0;
}

