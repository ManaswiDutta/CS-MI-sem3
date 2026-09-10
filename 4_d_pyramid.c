#include <stdio.h>
int main()
{
    int size = 4;
    int line_size = 2 * size - 1;
    for (int i = 1; i <= size; i++)
    {
        for (int n = size - i; n >= 1; n--)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j += 1){
            char r = (j % 2 == 1) ? '*' : ' ';
            printf("%c", r);
        }
        for (int n = size - i; n >= 1; n--)
        {
            printf(" ");
        }
        printf("\n");
    }
}