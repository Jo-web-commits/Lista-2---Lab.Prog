#include <stdio.h>

int main (void) {

    int num, digit, count;
    printf("Insira um número inteiro: ");
    scanf("%d", &num);


    while (num !=0 ) {
        digit = num % 10;
        num = (num - digit) /10;
        if (digit == 7) count++;
    }

    printf("A quantidade de dígitos '7' no número vale: %d", count);


    return 0;
}