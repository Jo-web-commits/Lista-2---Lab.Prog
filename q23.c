#include <stdio.h>

int main (void) {
    int n = 5;

    printf("Pré-drecemento: %d\n", --n - 3); // decrementa antes da subtração
    printf("Pos-drecemento: %d\n", n-- - 1); // decrementa após a subtração

    return 0;
}