#include<stdio.h>

int main() {
    float a = 3.14159;
    int b = a;
    float c = a-b;
    printf("Given float: %.5f\n",a);
    printf("Integer part: %d\n",b);
    printf("Fractional part: %.5f\n",c);
    return 0;
}