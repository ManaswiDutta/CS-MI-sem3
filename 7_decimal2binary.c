#include <stdio.h>

int main() {
    int dec = 23;
    int orig = dec;
    int bin = 0;
    int place = 1;
    while (dec > 0) {
        int remainder = dec % 2;
        bin = bin + (remainder * place);
        place *= 10;
        dec /= 2;
    }

    printf("%d --> %d\n", orig, bin);

    return 0;
}