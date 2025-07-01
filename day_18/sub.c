#include <stdio.h>
#include <string.h>

int main()
{
	char str[100];
	printf("Enter a string : ");
	scanf("%s",str);
	int len=strlen(str);
	int count1=0;
	int count2=0;
	int max=0;
	for(int i=0; i<len; i++) {
		if(str[i]=='1') {
			count1+=1;
		}
		else {
			count2+=1;
		}
	}
	for(int i=0; i<len; i++) {
		int count3=0;
		int count4=0;
		int count5=0;
		for(int j=i; j<len; j++) {
			if(str[j]=='1') {
				count3+=1;
			}
			else {
				count4+=1;
			}
		}
        if(count3==count4){
			    count5=count3+count4;
			}
			if(count5>max){
			    max=count5;
			}
// 		printf("No of Zeroes when index is %d : %d\n",i,count4);
// 		printf("No of Ones when index is %d : %d\n",i,count3);
	}
	printf("No of Zeroes : %d\n",count2);
	printf("No of Ones : %d\n",count1);
	printf("Result : %d",max);
	return 0;
}