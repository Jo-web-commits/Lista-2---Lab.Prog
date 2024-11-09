#include <stdio.h>
#include <limits.h>

int main (void) {
    int maior = INT_MIN;
    int menor = INT_MAX;
    int num;

    do {
        printf("Insira um número inteiro: ");
        scanf("%d", &num);

        if (num < menor) menor = num;
        if (num > maior) maior = num;
    } while (!(num % 2 == 0 && num < 0));

    printf("O produto do maior vezes o menor vale: %d", maior * menor);
    return 0;
}