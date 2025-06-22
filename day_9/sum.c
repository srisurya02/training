#include<stdio.h>
int main(){
    int  num=2563;
    int sum=0;
    while(num>0){
        sum+=num%10;
        num/=10;

    }
    printf("%d",sum);
}