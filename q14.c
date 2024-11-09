#include <stdio.h>
#include <math.h>

int main (void) {
    int A, B;
    printf("Insira os limites mínimos e máximos: ");
    scanf("%d %d", &A, &B);

    if (A < B) {
        for (int i = A; i <= B; i++) {
            if (i % 3 == 0) {
                printf("%d\n", i);
            }
        }
    }
    else {
         for (int i = B; i <= A; i++) {
            if (i % 3 == 0) {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}