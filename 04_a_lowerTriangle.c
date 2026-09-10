#include<stdio.h>
int main(){
    int size = 4;
    for(int i=1;i<=size;i++){
        printf("\n");
        for(int j=1;j<=i;j++){
            printf("*");
        }
    }
}