#include <stdio.h>

int main (void) {
    char confirm;
    int votosPaulo = 0, voto, nulo = 0, branco = 0;
    int votosRenata = 0;


    do {
        printf("Insira o número que deseja votar: ");
        scanf("%i", &voto);

        printf("Você confirma o voto? (y/n)");
        scanf(" %c", &confirm);

        if(confirm == 'n') break;

        switch (voto) {
            case 7:
                printf("Voto computado!\n");
                ++votosRenata;
                break;
            case 0:
                printf("Voto computado!\n");
                ++branco;
                break;
            case 5:
                printf("Voto computado!\n");
                ++votosPaulo;
                break;
            default:
                ++nulo;
                printf("Voto nulo computado!\n");
                break;
        }

    } while(voto >= 0);
    int total = votosPaulo + votosRenata + branco + nulo;

    printf("Relatório das eleições:\n Porcentagem de votos no Paulo: %.2f\n Porcentagem de votos na Renata: %.2f\n", (float) votosPaulo/total, (float) votosRenata/total );
    printf("Votos nulos: %d\n", nulo);
    printf("Votos em branco: %d\n", branco);
    (votosPaulo > votosRenata) ? printf("O ganhador da eleição é o Paulo\n") : printf("A ganhadora da eleição é a Renata\n");

    return 0;
}