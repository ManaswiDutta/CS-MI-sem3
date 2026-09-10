#include<stdio.h>
int main(){
    //take size of a
    int n;
    printf("Enter the number of elemets in first array: ");
    scanf("%d",&n);
    //input a[]
    int a[n];
    printf("Enter first array :-\n");
    for(int i=0;i<n;i++){
        printf("a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    //display a[]
    printf("a = [");
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
        if(i!=n-1){
            printf(",");
        }
    }
    printf("]\n");
    //take size of b
    int m;
    printf("Enter the number of elemets in second arrary: ");
    scanf("%d",&m);
    //input b
    int b[m];
    printf("Enter second array :-\n");
    for(int i=0;i<m;i++){
        printf("b[%d]: ",i);
        scanf("%d",&b[i]);
    }
    //dislay b[]
    printf("b = [");
    for(int i=0;i<m;i++){
        printf("%d",b[i]);
        if(i!=m-1){
            printf(",");
        }
    }
    printf("]");
    //sort a[]
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<=i-1;j++){
            if (a[j]>a[j+1]){
                int temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    //display sorted a[]
    printf("\n(sorted)a = [");
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
        if(i!=n-1){
            printf(",");
        }
    }
    printf("]");
    //sort b[]
    for(int i=m-1;i>=0;i--){
        for(int j=0;j<=i-1;j++){
            if (b[j]>b[j+1]){
                int temp = b[j];
                b[j]=b[j+1];
                b[j+1]=temp;
            }
        }
    }
    //display sorted b[]
    printf("\n(sorted)b = [");
    for(int i=0;i<m;i++){
        printf("%d",b[i]);
        if(i!=m-1){
            printf(",");
        }
    }
    printf("]");

    int c[n+m];
    int i=0,j=0;
    int k = 0;
    while(k<n+m){
        if (a[i]<b[j]){
            c[k] = a[i];
            if(i!=n-1){
                i++;
            }
            else{
                a[i]=b[m-1];
            }
        }
        else{
            c[k]=b[j];
            if(j!=m-1){
                j++;
            }
            else{
                b[j]=a[n-1];
            }
        }
        k++;
    }
    printf("\n(sorted)c = [");
    for(int i=0;i<n+m;i++){
        printf("%d",c[i]);
        if(i!=n+m-1){
            printf(",");
        }
    }
    printf("]");
}