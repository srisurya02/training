#include<stdio.h>
void main(){
    int age;
    printf("enter the age");
    scanf("%d", &age);
    char gender='m' && 'f';
    if(age<18 || gender =='f'){
        printf(" tickect is free");
    }
    else{
        printf("tickect is given");
    }
    
}