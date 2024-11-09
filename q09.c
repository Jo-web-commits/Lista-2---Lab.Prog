#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) return 0; 
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2); 
}

int main(void) {

    int n = 20;
    printf("Sequência de Fibonacci até o 20º termo:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");




    return 0;
}