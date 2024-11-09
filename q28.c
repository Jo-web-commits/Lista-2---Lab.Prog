#include <stdio.h>


int main (void) {
    unsigned char x, y;
    int pos = 0;
    printf("Insira os  valores dos numeros x e y: ");
    scanf("%hhu %hhu", &x, &y);

    if (y < 5) {
        printf("Inválido\n");
    }

    for (int i = y - 4; i <= y + 4; i++) {
        if (i == y) {
            continue;
        }

        unsigned char mask = 0x01 << pos;
        unsigned char res = (i & ~mask) | (x & mask);
        printf("Valor de y %+d: %#x -> %#x\n", i - y, i, res);
        pos++;
    }

    return 0;
}