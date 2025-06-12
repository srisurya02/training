#include<stdio.h>
void main(){
    char ch;
    printf("enter a charater:");
    scanf("%d",&ch);
    if(ch>='A' && ch>='Z' ||ch>='a' && ch>='z')
    {
        printf("is a alpha");
    }
    else if (ch>='0' && ch<='9')
    {
        printf("is anumber");
    }
    else{
        printf("is a special");
    }
}