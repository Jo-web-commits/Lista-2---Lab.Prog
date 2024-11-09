#include <stdio.h>
#include <math.h>

int main (void) {
    int A, B, somatorio = 0;
    printf("Insira os limites mínimos e máximos para o somatorio: ");
    scanf("%d %d", &A, &B);

    if (A < B) {
        for (int i = A; i <= B; i++) {
            somatorio += i;
        }
    }
    else {
        for (int i = B; i <= A; i++) {
            somatorio += i;
        }
    }

    printf("O valor do somatório no dado intervalo é: %d", somatorio);
    return 0;
}