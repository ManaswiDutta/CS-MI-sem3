#include<stdio.h>
int main(){
    int n = 12345;
    int original = n;
    int sum = 0;
    int digit = 0;
    while (n>0){
        digit = n%10;
        sum+= digit;
        n-digit;
        n/=10;
    }
    printf("sum of digits of %d --> %d",original,sum);
}