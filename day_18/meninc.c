#include <stdio.h>
void change(int *arr){
    *arr+=1;
}
int main()
{
    int arr[5]={11,32,36,4,5};
    change(arr);
    printf("%d",arr[0]);
    return 0;
}