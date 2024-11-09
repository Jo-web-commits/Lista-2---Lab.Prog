#include <stdio.h>

int main (void){
    unsigned char day;

    printf("Insira o número do dia da semana: ");
    scanf("%hhu", &day);
        
    switch (day){
        case 1:
            printf("Domingo!\n");
            break;
        case 2:
            printf("Segunda-feira!\n");
            break;
        case 3:
            printf("Terça-feira!\n");
            break;
        case '4':
            printf("Quarta-feira!\n");
            break;
        case 5:
            printf("Quinta-feira!\n");
            break;
        case 6:
            printf("Sexta-feira!\n");
            break;
        case 7:
            printf("Sábado!\n");
            break;
        default:
            printf("Número de dia não válido!\n");
            break;
    }
    
    return 0;
}
