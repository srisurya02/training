#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

int main()
{
    struct node *head=NULL,*createnode=NULL;
    //int *ptr=malloc(sizeof(int));
    createnode = (struct node*)malloc(sizeof(struct node));
    createnode->data=10;
    createnode->next=NULL;
    head=createnode;
    
    printf("%d",head->data);
return 0;
}