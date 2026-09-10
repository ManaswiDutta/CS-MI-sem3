#include<stdio.h>
int main(){
    printf("Enter number of rows: ");
    int rows;
    scanf("%d",&rows);
    printf("\n");
    for(int i = 1 ; i<=rows ; i++){
        for(int j =1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}