#include <stdio.h>

int main() {
    unsigned char day;

    do {
        printf("Digite um número (1-7) para o dia da semana ou 0 para sair: ");
        scanf("%hhu", &day);
        
        if (day == 0) break;

        if (day < 1 || day > 7) {
            printf("Número de dia não válido.\n");
        } else {
            switch (day) {
                case 1: printf("Domingo\n"); break;
                case 2: printf("Segunda\n"); break;
                case 3: printf("Terça\n"); break;
                case 4: printf("Quarta\n"); break;
                case 5: printf("Quinta\n"); break;
                case 6: printf("Sexta\n"); break;
                case 7: printf("Sábado\n"); break;
            }
        }
    } while (day != 0);

    return 0;
}