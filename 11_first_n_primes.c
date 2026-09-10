#include <stdio.h>
#include <math.h>
int main()
{
    int flag;
    printf("Enter a number: ");
    scanf("%d", &flag);
    printf("\n*** Printing First %d Prime numbers ***\n", flag);
    if (flag == 1){
        printf("1) 2");
    }
    else if (flag ==2){
        printf("1) 2\n2) 3\n");
    }
    else{
        printf("1) 2\n2) 3\n");
        int n = 4;
        int count = 3;
        while (count <= flag){
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
                printf("%d) %d\n", count , n);
                count += 1;
            }
            n+=1;
        }
    }
}