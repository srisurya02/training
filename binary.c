#include<stdio.h>
void main(){
     int num;
     printf("enter the num");
     scanf("%d",&num);
     int sum=0,val=1;
     while(num>0){
          if(num % 10==1){
               sum+=val;

          }
          val*=2;
          num/=10;

     }
     printf("%d",sum);


}
    