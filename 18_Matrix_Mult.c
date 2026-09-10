#include<stdio.h>
int main(){
    int p,q,r;
    printf("Enter the number of rows in first matric: ");
    scanf("%d",&p);
    printf("Enter the number of columns in first matric: ");
    scanf("%d",&q);
    printf("Enter the number of columns in second matric: ");
    scanf("%d",&r);

    int a[p*q];
    int b[q*r];
    printf("ENTER ELEMENTS OF A:-\n");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            printf("A[%d][%d]: ",i,j);
            scanf("%d",&a[i*p+j]);
        }
    }
    printf("[A]=\n");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            printf(" %d ",a[i*p+j]);
        }
        printf("\n");
    }
    printf("ENTER ELEMENTS OF B:-\n");
    for(int i=0;i<q;i++){
        for(int j=0;j<r;j++){
            printf("B[%d][%d]: ",i,j);
            scanf("%d",&b[i*q+j]);
        }
    }
    printf("[B]=\n");
    for(int i=0;i<q;i++){
        for(int j=0;j<r;j++){
            printf(" %d ",b[i*q+j]);
        }
        printf("\n");
    }

    printf("\n[A]x[B]=\n");
    int c[p*r];
    for (int i=0;i<p;i++){
        for(int j = 0; j<r;j++){
            c[i*p+j]=0;
            for(int k = 0 ; k<q;k++){
                c[i*p+j]+=a[i*p+k]*b[k*q+j];
            }
        }
    }
    for(int i=0;i<p;i++){
        for(int j=0;j<r;j++){
            printf(" %d ",c[i*p+j]);
        }
        printf("\n");
    }

}