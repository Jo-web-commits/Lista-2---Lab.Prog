#include <stdio.h>

int main (void) { 
    int num;
    double pi = 0.0;
    int sinal = 1;

    printf("Digite até onde vai a aproximação: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        pi += sinal * (4.0 / (2 * i + 1));
        sinal = -sinal;
        printf("%d\t %.15f\n", i + 1, pi); 
    }
    return 0;
}