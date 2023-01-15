#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;  //pointer name
}*first=NULL;    //This is the pointer of itself, which makes it a global pointer

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

//Searching in a Linkedlist
struct Node *Search(struct Node *p, int key){
    while (p!=NULL)
    {
        if(key==p->data)
            return p;

        p=p->next;
    }
    return NULL;
}

//By recursively
struct Node *RSearch(struct Node *p, int key){
    if (p==NULL)
        return NULL;
    if(key == p->data)
        return p;
    return RSearch(p->next, key); 
}

//By modified Linear Search using Move-to-head method.
struct Node *MLSearch(struct Node *p, int key){
    struct Node *q=NULL;
    while (p!=NULL)
    {
        if(key==p->data)
        {
            q->next = p->next;
            p->next=first;
            first = p;
            return p;   
        }
        q=p;
        p=p->next;
    }
    return NULL;
}


int main(){
    struct Node *temp, *tempR, *tempMLS;
    int A[]={3, 35, 7, 10, 15, 25};
    create(A, 6);
    Display(first);
    temp=Search(first, 15);
    tempR=RSearch(first, 15);
    tempMLS=MLSearch(first, 15);
    tempMLS=MLSearch(first, 10);
    
    
    //printf("\nThe Searching of element: %d \n", temp ? printf("True")  : printf("False"));
    if(temp)
        printf("\nKey is found Linear Search: %d\n", temp->data);
    else
        printf("\nKey is not found Linear Search\n");


    if(tempR)
        printf("\nKey is found by Recursively: %d\n", tempR->data);
    else
        printf("Key is not found by recursively");
    
    
    if(tempMLS)
        printf("\nKey is found by Modified Linear Search using Move-to head technique: %d\n", tempMLS->data);
    else
        printf("Key is not found by recursively\n");
    Display(first);


    return 0;
}
