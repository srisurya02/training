#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="srisurya";
    int arr[26]={0};
    for(int i=0; i<strlen(str); i++)
    {
        arr[str[i]-'a']+=1;
    }
    for(int i=0; i<26; i++)
    {
        if(arr[i])
        printf("%c %d\n",i+97,arr[i]);
    }
    return 0;
}