#include<stdio.h>
int main()
{
    int size=5;
    int arr[7]={1,2,3,4,5};
   int num1 = 10, pos1 = 2;
    int num2 = 20, pos2 = 4;
    for(int i = size; i > pos1; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos1] = num1;
    size++;
    for(int i = size; i > pos2; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos2] = num2;
    size++;
    for(int i = 0; i < size; i++) {
        printf("%d\n ", arr[i]);
    }
  
    return 0;
}