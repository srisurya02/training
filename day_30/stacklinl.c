#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top =NULL;
void push(int val)
{
    struct node *createnode =(struct node*)malloc(sizeof(struct node *));
   createnode->data=val;
   createnode->next=top;
   top=createnode; 
}
void dis()
{
    struct node *temp=top;
    while(temp != NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}
void main()
{
    push(20);
    push(10);
    dis();
}
