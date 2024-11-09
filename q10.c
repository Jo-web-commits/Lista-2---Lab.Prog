#include <stdio.h>
#include <math.h>


int main (void) {

    for (int i = 15; i <= 90; i++) {
        if (i % 4 == 0) {
            int potencia = pow(i, 2);
            printf("%d\n", potencia);
        }
    }


    return 0;
}