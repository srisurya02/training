#include<stdio.h>
int main()
{
 int a;
 printf("Enter a number: ");
 scanf("%d",&a);

 for(int i=0;i<a;i++){if(i%2 == 0)
 {
    printf("%d" "EVEN\n",i);
 }
 else{
    printf("%d" "ODD\n",i);
 }}
 
 return 0;
 
}