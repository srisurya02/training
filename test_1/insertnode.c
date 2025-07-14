#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;    
};
struct node *head=NULL,*createnode=NULL,*newnode=NULL,*old=NULL;
void getdata()
{
    struct node *temp;
    int n;
    printf("Enter how much node to create:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int value;    
        createnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the value:");
        scanf("%d",&value);
        createnode->data=value;
        createnode->next=NULL;
        if(head==NULL)
        {  
            head = createnode;
        }
        else
        {
            old->next = createnode;
        }
        old=createnode;
        temp=head;
    }   
}
void displayallnode()
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("%d  \n",temp->data);
        temp =temp->next;
    }
}
void displaylimit()
{
    struct node *temp=head;
    int n,m;
    printf("Enter the starting node:");
    scanf("%d",&n);
    printf("Enter the ending node:");
    scanf("%d",&m);
    for(int i=0;i<n-1;i++)
    {
        temp =temp->next;
    }
    for(int i=n;i<=m;i++)
    {
        printf("%d  ",temp->data);
        temp = temp->next;
    }   
}
void insert()
{
    struct node *temp=head;
    int n,value;
    printf("Enter the node to place:");
    scanf("%d",&n);
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the value to add:");
    scanf("%d",&value);
    newnode->data=value;
    newnode->next=NULL;
    if(n==1)
    {
        newnode->next=head;
        head = newnode;
    }
    else
    {
        struct node *temp = head;
    
        for(int i=1;i<n-1;i++)
            {
                temp =temp->next;
            }
        newnode->next = temp->next;
        temp->next = newnode;
    }   
}
void displaynode()
{
    struct node *temp = head;
    int n;
    printf("Enter the node to display:");
    scanf("%d",&n);
    for(int i=0;i<n-1;i++)
    {
        temp =temp->next;
        
    }
    printf("%d",temp->data);
}
int main().


{
    while(1){
    int n;
    printf("Enter the choice:\n 1.Create node:\n 2.Display all node:\n 3.Display with limit:\n 4.Insert the node: \n 5.Display node:\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        {
            getdata();
            break;
        }
         case 2:
        {
            displayallnode();
            break;
        }
         case 3:
        {
            displaylimit();
            break;
        }
         case 4:
        {
            insert();
            break;
        }
        case 5:
        {
            displaynode();
            break;
        }
        
    }
    }
    return 0;
}