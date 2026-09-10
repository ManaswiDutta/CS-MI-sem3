#include <stdio.h>
int main()
{
    int p, q;
    printf("Enter the number of rows in matrices: ");
    scanf("%d", &p);
    printf("Enter the number of columns in matrices: ");
    scanf("%d", &q);

    int a[p*q];
    int b[p*q];
    printf("ENTER ELEMENTS OF A:-\n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &a[i*p+j]);
        }
    }
    printf("[A]=\n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf(" %d ", a[i*p+j]);
        }
        printf("\n");
    }
    printf("ENTER ELEMENTS OF B:-\n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &b[i*p+j]);
        }
    }
    printf("[B]=\n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf(" %d ", b[i*p+j]);
        }
        printf("\n");
    }

    printf("\n[A]+[B]=\n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf(" %d ", a[i*p+j] + b[i*p+j]);
        }
        printf("\n");
    }
}