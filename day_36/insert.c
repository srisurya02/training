#include <stdio.h>
int size=5;
int dequeue[5];
int front,rear=-1;

int isfull()
{
    if(front == (rear+1)%size )
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void insertatrear(int val){
    if(isfull()){
        printf("Queue is Full\n");
        return;
    }
    if(front==-1){
        front=0;
    }
    rear=rear+1;
    dequeue[rear]=val;
    printf("value - %d\n",dequeue[rear]);
    printf("rear - %d\n",rear);
    printf("front - %d\n",front);
}

void insertatfront(int val){
    if(isfull()){
        printf("Queue is Full\n");
        return;
    } 
    if(front==0){
        front=size-1;
        dequeue[front]=val;
    }
    else{
        front=front-1;
        dequeue[front]=val;
    }
    printf("value - %d\n",dequeue[front]);
    printf("rear - %d\n",rear);
    printf("front - %d\n",front);
    
}
int main()
{
    while(1){
        switch case()
    }
    printf("Insert at rear\n");
    insertatrear(10);
    insertatrear(20);
    insertatrear(30);
    insertatrear(100);
    printf("Insert at front\n");
    insertatfront(50);
    insertatfront(40);
    return 0;
}