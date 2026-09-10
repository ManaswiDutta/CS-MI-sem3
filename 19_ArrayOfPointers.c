#include <stdio.h>

int main()
{
    int *arr[10];
    int n[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the number in %d position: ", i + 1);
        scanf("%d", &n[i]);
        arr[i] = &n[i];
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%p\t%d\n", arr[i], *arr[i]);
    }
}