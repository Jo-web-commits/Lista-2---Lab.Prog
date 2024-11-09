#include <stdio.h>
#include <math.h>

int main (void) {

    float produto;
    float prestacao = 0, entrada = 0;
    printf("Entre com o valor do produto: ");
    scanf("%f", &produto);

    if((int) produto % 3 == 0) {
        prestacao = produto / 3;
        entrada = produto / 3;
    }
    else {
        prestacao = floor(produto / 3);
        entrada = produto - 2 * prestacao;
    }

    if (entrada < prestacao) {
        prestacao = floor((produto - entrada) / 2);
        entrada = produto - 2 * prestacao;
    }

    
    printf("O valor da entrada e das duas parcelas vale: %.2f e %.2f", entrada, prestacao);

    return 0;
}