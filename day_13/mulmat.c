#include<stdio.h>
int  main()
{
    int r1, c1, r2, c2;
    printf("Enter the size of matrices (r1 c1 r2 c2): ");
    scanf("%d %d %d %d", &r1, &c1, &r2, &c2);
    if (c1 != r2) 
    {
        printf("Matrix multiplication not possible. Columns of first matrix must equal rows of second matrix.\n");
        return 1;
    }
    int a[r1][c1], b[r2][c2], result[r1][c2];
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++)
            result[i][j] = 0;
    for (int i = 0; i < r1; i++) 
    {
        for (int j = 0; j < c2; j++)
         {
            for (int k = 0; k < c1; k++) 
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("Resultant matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
