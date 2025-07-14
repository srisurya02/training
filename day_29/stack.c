#include <stdio.h>
#define SIZE 5
int stack[SIZE];
int top = -1;
void push(int value) 
{
    if (top == SIZE - 1)
     {
        printf("Stack is full (overflow)\n");
    } else 
    {
        top++;
        stack[top] = value;
        printf("Pushed %d into the stack\n", value);
    }
}
void display()
 {
    if (top == -1)
     {
        printf("Stack is empty\n");
    } else
     {
        printf("Stack contents: ");
        for (int i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}
void pop()
 {
    if (top == -1)
     {
        printf("Stack is empty (underflow)\n");
    } else 
     {
        printf("Popped value: %d\n", stack[top]);
        top--;
    }
}
void peek()
 {
    if (top == -1)
     {
        printf("Stack is empty, no top element\n");
    } else 
    {
        printf("Top element is: %d\n", stack[top]);
    }
}
void isEmpty() 
{
    if (top == -1) 
    {
        printf("Yes, the stack is empty\n");
    } else 
    {
        printf("No, the stack is not empty\n");
    }
}
int main()
 {
    push(10);
    push(20);
    push(30);
    display();     
    pop();          
    peek();         
    isEmpty();     
    display();      
    return 0;
}