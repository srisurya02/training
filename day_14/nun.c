#include<stdio.h>
#include<string.h>
int main ()
{
    char str[]="12596+-*/";
    int val=str[0]-'0';
      for(int i=0;i<=strlen(str)/2;i++)
    {
        switch(str[(strlen(str)/2)+i])
        {
            case '+':
            {
                val+=str[i]-'0';
                break;
            }
             case '-':
             {
                val-=str[i]-'0';
                break;
            }
             case '*':
             {
                val*=str[i]-'0';
                break;
            }
             case '/':
             {
                val/=str[i]-'0';
                break;
            }
        }
        
    }
    printf("%d",val);
  return 0;
}
