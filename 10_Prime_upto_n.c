#include <stdio.h>
#include <math.h>
int main()
{
    int flag;
    printf("Enter a number: ");
    scanf("%d", &flag);
    printf("\n*** Printing Prime numbers upto %d ***\n", flag);
    if (flag == 2)
    {
        printf("2");
    }
    else
    {
        printf("2\n3\n");
        int n = 4;
        while (n <= flag)
        {
            int is_prime = 1;
            if(n%2==0){
                is_prime=0;
            }
            else{
                for (int i = 3; i <= sqrt(n); i += 2){
                    if (n % i == 0)
                    {
                        is_prime = 0;
                        break;
                    }
                }
            }
            if (is_prime == 1)
            {
                printf("%d\n", n);
            }
            n += 1;
        }
    }

    scanf("%d",&flag);
}