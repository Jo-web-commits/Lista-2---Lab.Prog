#include <stdio.h>

int fatorial(int num) {
    if (num == 0) return 1;
    return num * fatorial(num-1);
}

int main (void) {

    for(int i = 1; i < 11; i++) {
        if (i % 3 == 0) {
            printf("Fatorial: %d\n", fatorial(i));
        }
    }

    return 0;
}