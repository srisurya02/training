#include<Stdio.h>
void main(){
    int A,B,C;
    printf("enter the value");
    scanf("%d %d %d" ,&A,&B,&C);
    if(A>B && A>C){
        printf("A IS  GREATER");
    }
    else if (B>A && B>C)
    {
        printf("B IS GRRATER");
    }
    else{
        printf("C IS GREATER");
    }
  
}