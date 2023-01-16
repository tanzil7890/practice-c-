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

int checkSortedLinkedlist(struct Node *p){
    int x = INT32_MIN;
    while (p!=NULL)
    {
        if(p->data <x)
            return 0;
        
        x =p->data;
        p=p->next;
        
    }
    return 1;
    
}


int main(){
    int A[]={10, 20, 30, 40, 50};
    create(A, 5); 
    //printf("is Soted or not(0 means False) & (1 means True)?: %d \n", checkSortedLinkedlist(first));
    if (checkSortedLinkedlist(first))   
        printf("Sorted\n");
    else
        printf("Not Sorted\n");
    
    Display(first);

    return 0;
}

