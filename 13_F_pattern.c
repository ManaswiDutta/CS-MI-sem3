#include<stdio.h>
int main(){
    printf("Enter number of rows: ");
    int rows;
    scanf("%d",&rows);
    printf("\n");
    int count=0;
    for(int i = 1 ; i<=rows ; i++){
        for(int j = 0; j<i ; j++){
            printf("%d",count);
            count++;
        }
        printf("\n");
    }
}