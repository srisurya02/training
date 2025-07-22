#include<stdio.h>
int size=5;
int queue[5];
int front = -1 , rear = -1;
void enqueue(int val){
    if(front == -1){
        front++;
    }
    rear++;
    queue[rear]=val;
}
void display(){
    for(int i=front;i<rear;i++){
        printf("Value - %d\n",queue[i]);
    }
}
void dequeue(){
    front++;
    printf("Element is removed\n");
}
int main()
{
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    display();
    dequeue();
    display();

    return 0;
}