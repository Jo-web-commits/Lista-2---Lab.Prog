#include <stdio.h>
#include <math.h>

int main (void) {
    int A, B, potencia;
    printf("Insira os limites mínimos e máximos para os quadrados: ");
    scanf("%d %d", &A, &B);

    if (A < B) {
        for (int i = A; i <= B; i++) {
            if (i % 4 == 0) {
            int potencia = pow(i, 2);
            printf("%d\n", potencia);
        }
        }
    }
    else {
        for (int i = B; i <= A; i++) {
                if (i % 4 == 0) {
                int potencia = pow(i, 2);
                printf("%d\n", potencia);
            }
        }
    }
    return 0;
}