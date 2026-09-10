#include<stdio.h>
int main(){
    int n = 1212121;
    int original = n;
    int rev = 0;
    int temp = 0;
    while (n>0){
        temp = n%10;
        rev= rev*10 + temp;
        n-temp;
        n/=10;
    }
    if (original==rev){
        printf("%d is a pallindrome",rev);
    }
    else{
        printf("%d is NOT a pallindrome",rev);
    }
}