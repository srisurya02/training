#include <stdio.h>

int main()
{
    int arr[10]={8,2,4,6,1,5};
    int n=6;
    
    for(int i=0;i<n;i++)
    {
        int small=i;
        for(int j=i+1;j<n;j++)
        {
           if(arr[j]<arr[small]){
                   small=j;
           } 
        }
        int temp = arr[i];
        arr[i]=arr[small];
        arr[small]=temp;
    }
    
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }

    return 0;
}