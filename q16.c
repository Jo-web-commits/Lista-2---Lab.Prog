#include <stdio.h>

int main(void) {
    int somatorio3 = 0, somatorio5 = 0;
    for (int i = 0; i <= 200; i++) {
        if (i <= 100 && i % 3 == 0) {
            somatorio3 += i;
        }
        if (i > 100 && i % 5 == 0) {
            somatorio5 += i;
        }
    }

    
    printf("%d\n", somatorio3);
    printf("%d", somatorio5);

    return 0;
}