#include<stdio.h>

int main() {
    int a = 36;
    int b = 67;
    int c = 69;
    int larger,largest,smaller,smallest;
    larger = (a>b)?a:b;
    largest = (larger>c)?larger:c;
    smaller = (a<b)?a:b;
    smallest = (smaller<c)?smaller:c;
    printf("largest: %d\n",largest);
    printf("smallest: %d\n",smallest);

}