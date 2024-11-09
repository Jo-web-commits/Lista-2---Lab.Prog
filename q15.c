#include <stdio.h>
#include <math.h>

int main (void) {
    int var;
    for (int i = 0; i <= 7; i++) {
        var = pow(3, i);
        printf("%d\n", var);
    }

    return 0;
}