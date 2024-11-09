#include <stdio.h>

int main (void) {

    float celsius = 0, fahrenheit;

    do {
        celsius += 10;
        fahrenheit = ((celsius * 9) / 5) + 32;
        printf("Celsius: %.2f\n", celsius);
        printf("Fahrenheit: %.2f\n", fahrenheit);

    } while (celsius != 100);



    return 0;
}