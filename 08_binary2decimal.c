#include <stdio.h>
#include <math.h>
int main()
{
    int binary = 1000101;
    int original = binary;
    int dec = 0;
    int len = 0;
    int power = 0;
    int temp = binary;
    int position = 0;
    while (binary > 0)
    {
        int bit = binary % 10;
        dec += bit * pow(2, position);
        binary -= bit;
        binary = binary / 10;
        position += 1;
    }
    printf("%c", dec);
}