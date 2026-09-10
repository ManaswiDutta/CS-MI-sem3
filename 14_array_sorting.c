#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elemets you wanna sort: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter your numbers:-\n");
    for(int i=0;i<n;i++){
        printf("a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    printf("a = [");
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
        if(i!=n-1){
            printf(",");
        }
    }
    printf("]\n");

    for(int i=n-1;i>=0;i--){
        for(int j=0;j<=i-1;j++){
            if (a[j]>a[j+1]){
                int temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("(sorted)a = [");
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
        if(i!=n-1){
            printf(",");
        }
    }
    printf("]");
}