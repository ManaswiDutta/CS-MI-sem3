#include<stdio.h>
int main(){
    int a=0;
    int b=1;
    int count = 1;
    int new=0;
    int flag;
    printf("Enter a number: ");
    scanf("%d",&flag);
    printf("\n*** Printing Fibonacci numbers upto %d ***\n",flag);
    if (flag==0){
        printf("F(0) = 0\n");
    }
    else if (flag==1){
        printf("F(0) = 0\nF(1) = 0\n");
    }
    else{
        printf("F(0) = 0\nF(1) = 0\n");
        while((a+b)<=flag){
            new = a + b;
            a=b;
            b=new;
            count+=1;
            printf("F(%d) = %d\n",count,new);
        }
    }
}