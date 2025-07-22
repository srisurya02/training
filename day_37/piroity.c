#include <stdio.h>
int size;
int data[100];
int priority[100];
int count=0;

void enqueue(int val,int pri)
{
    if(count==size)
    {
        printf("The queue is full\n");
        return;
    }
    data[count]=val;
    priority[count]=pri;
    count++;
    printf("The Data %d is stored with priority %d\n",val,pri);
}


int main()
{
    int n,val,pri;
    printf("Enter the size of the arrays: ");
    scanf("%d",&size);
    while(1)
    {
        printf("1)Enter the Data and Priority\n 2)Delete the Data\n 3)Display\n");
        printf("Enter Your choice: ");
        scanf("%d",&n);
        switch(n)
        {
            case 1:{
                printf("Enter the Value and Priority: ");
                scanf("%d %d",&val,&pri);
                enqueue(val,pri);
            }
        }
    }

    return 0;
}