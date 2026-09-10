#include<stdio.h>
int main(){
    printf("Enter number of rows: ");
    int rows;
    scanf("%d",&rows);
    printf("\n");
    for(int i = 1 ; i<=rows ; i++){
        for(int j=1;j<=rows-i;j++){
           printf(" ");
        } 
        for(int k=1;k<=2*i-1;k++){
            printf("%d",k%2);
        }
        for(int j=1;j<=rows-i;j++){
           printf(" ");
        } 
        printf("\n");
    }
}