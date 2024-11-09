#include <stdio.h>

int fatorial(int n) {
    if(n == 0 || n == 1) {
        return 1;
    }
    return n * fatorial(n-1);
}

int main() {
    int num;
    printf("Insira um valor para calcular o seu fatorial: ");
    scanf("%i", &num);

    printf("O fatorial do número vale: %d\n", fatorial(num));

    return 0;
}