#include <stdio.h>

int main (void) {
    float inicio, fim;
    float media = 0;
    printf("Insira as marcações do intervalo desejado: ");
    scanf("%f %f", &inicio, &fim);

    if (inicio > fim) {
            for (int i = fim; i <= inicio; i++) {
            media += i;
        }
        printf("O valor da médias dos números dentro desse intervalo vale: %f", media/(- fim + inicio + 1));
    }
    else {
            for (int i = inicio; i <= fim; i++) {
            media += i;
        }
        printf("O valor da médias dos números dentro desse intervalo vale: %f", media/(fim - inicio + 1));
    }

    return 0;
}