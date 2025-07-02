#include <stdio.h>
int main()
{
    int arr[5]={5,4,3,2,1};
    int n=5;
    for(int i=0;i<n-1;i++)
    {
        int temp;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
  return 0;
}