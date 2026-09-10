#include<stdio.h>
int main(){
    int n = 12345;
    int original = n;
    int rev = 0;
    int temp = 0;
    while (n>0){
        temp = n%10;
        rev= rev*10 + temp;
        n-temp;
        n/=10;
    }
    printf("%d --> %d",original,rev);
}