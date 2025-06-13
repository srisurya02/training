#include <stdio.h>
int main()
{
    int num = 01101;
    int sum = 0;
    while (num > 0)
    {
        int rev = num % 10; // Get the last digit
        printf("%d", rev);
        sum += rev;
        num = num / 10; // Remove the last digit
    }
    printf("\nSum of digits: %d\n", sum);
}