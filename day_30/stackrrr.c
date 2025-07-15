#include <stdio.h>
#define SIZE 5
int stack[SIZE];
int top = -1;
void pushMany(int n) {
    int value;
    for(int i = 0; i < n; i++) {
        if(top == SIZE - 1) {
            printf("Stack Overflow\n");
            return;
        }
        printf("Enter value %d: ", i + 1);
        scanf("%d", &value);
        top++;
        stack[top] = value;
        printf("%d pushed to stack\n", value);
    }
}
void pop() {
    if(top == -1) {
        printf("Stack Underflow\n");
    } else {
        printf("%d popped from stack\n", stack[top]);
        top--;
    }
}
// Peek operation
void peek() {
    if(top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Top element: %d\n", stack[top]);
    }
}
// Display operation
void display() {
    if(top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements:\n");
        for(int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}
int main() {
    int choice, value;
    while(1) {
        printf("\nStack Operations:\n");
        printf("1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}