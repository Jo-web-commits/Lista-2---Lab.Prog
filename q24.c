#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define MAX_VALOR 500


int main(){
    int cateto1;
    int cateto2;
    float hipotenusa;

    for (cateto1 = 1; cateto1 <= MAX_VALOR; cateto1++) {
        for (cateto2 = cateto1; cateto2 <= MAX_VALOR; cateto2++) {  
            int soma = cateto1 * cateto1 + cateto2 * cateto2;
            hipotenusa = sqrt(soma);

            if (hipotenusa == (int)hipotenusa) {
              printf("Cateto 1: %d, Cateto 2: %d, Hipotenusa: %.2f\n", cateto1, cateto2, hipotenusa);
            }
        }
    }

    return 0;
}