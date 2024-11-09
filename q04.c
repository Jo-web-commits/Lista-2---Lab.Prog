#include <stdio.h>

int main() {
    int jose = 150;
    int pedro = 110;
    int contagem = 0;
    while (jose >= pedro) {
        jose += 2;
        pedro += 3;
        ++contagem;
    }
    printf("O total de anos para que Pedro fique maior que José vale: %d\n", contagem);

    return 0;
}