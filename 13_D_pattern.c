#include<stdio.h>
int main(){
    printf("Enter number of rows: ");
    int rows;
    scanf("%d",&rows);
    printf("\n");
    for(int i = 0 ; i<rows ; i++){
        for(int j = 1 ; j<=rows-i ; j++){
            printf("%c",64+j);
        }
        for(int k=0;k<2*i-1;k++){
            printf(" ");
        }
        for(int l = rows-i; l>=1 ;l-- ){
            if (l!=rows){
                printf("%c",64+l);
            }
        }
        printf("\n");
    }
}