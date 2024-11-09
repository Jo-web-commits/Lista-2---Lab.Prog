#include <stdio.h>

int main (void) {
    int x, y;

    printf("Insira o valor de dois números para realizar a divisão\n");
        scanf("%d", &x);

    do {
        printf("Favor insira o valor do segundo número (divisor)\n");
        scanf("%d", &y);
        printf("Insira um divisor válido.\n");
    } while( y == 0);

    printf("O valor da divisão vale: %.2f\n", (float) x/y);


    return 0;
}