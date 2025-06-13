#include <stdio.h>

int main()
{
    printf("Enter a number");
    int num;
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        if(i%3==0 && i%5==0){
            printf("%d is fizzbuzz\n",i);
        }
        else if(i%3==0){
        printf("%d is fizz\n",i);
        }
        else if(i%5==0){
            printf("%d is buzz\n",i);
        }
        else{
            printf("It is not a multiple of 3 and 5\n");
        }
    }
    return 0;
}