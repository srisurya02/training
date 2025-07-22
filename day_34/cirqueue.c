#include <stdio.h>
int n;
int a[100];
int front=-1,rear=-1;
void enqueue(int val)
{
if(front==-1 &&  rear==-1)
{
front=0;
rear=0;
a[rear]=val;
}
else if(front==(rear+1)%n)
printf("Queue is full\n");
else
{
rear=(rear+1)%n;
a[rear]=val;
}
}
void dequeue()
{
if(front==-1 && rear==-1)
printf("Queue is Empty");
else if((front+1)%n==(rear+1)%n)
front=rear=-1;
else
front=(front+1)%n;
}
void printQueue()
{
if(front==-1 && rear==-1)
printf("queue  is Empty\n");
else
{
int i=front;
while(i!=rear)
{
printf("%d ",a[i]);
i=(i+1)%n;
}
printf("%d\n",a[rear]);
}
}
int main()
{
printf("Enter queue Capacity: ");
scanf("%d",&n);
int caseno,val;
while(1)
{
printf("Enter 1.Enqueue 2.dequeue 3.print 4.exit: ");
scanf("%d",&caseno);
switch(caseno)
{
case 1:
printf("Enter value: ");
scanf("%d",&val);
enqueue(val);
break;
case 2:
dequeue();
break;
case 3:
printQueue();
break;
case 4:
return 0;
}
}
}