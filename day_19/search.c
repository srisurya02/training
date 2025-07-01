#include <stdio.h>
int main()
{
    int n=7;
    int arr[7]={1,2,3,4,5,6,7};
    int ele=7;
    int l=0;
    int r=n-1;
    int found=0;
    while(l<=r)
    {
        int m=(l+r)/2;
        if(ele==arr[m])
        {
            found++;
            printf("\nThe element is found at the index : %d\n",m);
            break;
        }
        else if(ele>arr[m])
        {
            l=m+1;
        }
        else{
            r=m-1;
        }
    }
    if(found==0)
    {
        printf("Element not found");
    }
      return 0;
}