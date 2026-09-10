#include<stdio.h>
int main(){
    printf("Enter number of rows: ");
    int rows;
    scanf("%d",&rows);
    printf("\n");
    for(int i = 0 ; i<rows ; i++){
        for(int j = i; j<=2*i ; j++){
            printf("%d",j);
        }
        printf("\n");
    }
}