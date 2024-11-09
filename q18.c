#include <stdio.h>
#include <stdint.h> 
//eu usei isso para poder usar um inteiro de largura de 64 bits
//mas poderia ser facilmente substituido por um unsigned long long

int main (void) {
    uint64_t graos = 1;
    for (int i = 0; i <= 63; i++) {
        graos += 1 << i;
    }
    printf("O numero de grãos vale: %llu\n", graos);
    return 0;
}