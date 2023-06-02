#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;  //pointer name
}*first=NULL, *second=NULL, *third=NULL;    //This is the pointer of itself, which makes it a global pointer

void createFirst(int A[], int n){
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


void createSecond(int B[], int n){
    int i;
    struct Node *t, *last;
    second=(struct Node *)malloc(sizeof(struct Node));
    second->data=B[0];
    second->next=NULL;
    last=second; //last point on first node.

    for ( i = 1; i < n; i++)
    {
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=B[i];
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

void concatLinkedlist(struct Node *p, struct Node *q){
    third=p;
    while (p->next!=NULL)
        p=p->next;
    
    p->next=q;
    
}

void mergeLinkedlist(struct Node *p, struct Node *q){
    struct Node *last;
    if (p->data < q->data)
    {
        third=last=p;
        p=p->next;
        third->next=NULL;
    }
    else{
        third=last=q;
        q=q->next;
        third->next=NULL;  
    }
    while(p!=NULL && q!=NULL){
        if (p->data < q->data)
        {
            last->next=p;
            last=p;
            p=p->next;
            last->next=NULL;
        }
        else{
            last->next=q;
            last=q;
            q=q->next;
            last->next=NULL;
        }
    }
    if (p!=NULL)
        last->next=p;
    if(q!=NULL)
        last->next=q;
}

int main(){
    int A[]={10, 20, 30, 40, 50};
    int B[]={5, 152, 252, 352, 452};
    createFirst(A, 5); 
    createSecond(B, 5);
    /* printf("First\n");
    Display(first);
    printf("\nSecond\n");
    Display(second); */
    
    
    //concatLinkedlist(first, second);

    mergeLinkedlist(first, second);
    Display(third);

    return 0;
}