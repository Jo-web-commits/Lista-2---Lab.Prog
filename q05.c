#include <stdio.h>

int main() {
    int n;
    int maior = n, menor = n;
    do {
        printf("Digite um número qualquer diferente de zero e digite 0 para encerrar: ");
        scanf("%d", &n);

        if(n == 0) break;

        if (maior < n) maior = n;
        if (menor > n) menor = n;

    } while (n != 0);
    printf("O maior e o menor número são: %d, e %d\n", maior, menor);
    return 0;
}