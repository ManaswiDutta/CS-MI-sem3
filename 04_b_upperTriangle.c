#include<stdio.h>
int main(){
    int size = 4;
    for(int i=1;i<=size;i++){
        printf("\n");
        for(int j=size+1-i;j>=1;j--){
            printf("*");
        }
    }
}