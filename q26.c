#include <stdio.h>


void converter(int n) {
    int binario[8];
    int i = 0;

    while (n > 0) {
        binario[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int j = 7; j >= i; j--) {
        printf("0");
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }
}

int main (void) {

    for (int j = 1; j <= 256; j++) {
        printf("Binário: ");
        converter(j);
        printf("\nOctal: %o, Hexadecimal: %X, Decimal: %d\n", j, j, j);
    }

    return 0;
}