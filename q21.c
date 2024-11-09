#include <stdio.h>

int palindrome(int num) {
    int digit;
    int original = num;
    int reversed;
    while (num != 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num = (num - digit) / 10;
    }
    if (original == reversed) {
        printf("O número é um palíndromo!!");
    }
    else printf("O número não é um palíndromo!!");
}

int main (void) {
    int num;
    printf("Insira um número de 5 dígitos: ");
    scanf("%d", &num);
    palindrome(num);
    return 0;
}