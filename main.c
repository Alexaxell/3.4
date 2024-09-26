#include <stdio.h>

int main(void) {
    char nome, sesso;
    printf("inserisci il tuo nome (solo iniziale):\n");
    scanf("%c", &nome);
    getchar();
    printf("inserisci il sesso (M o F):\n");
    scanf("%c", &sesso);
    if (sesso == 'M') {
        printf("Egregio signor %c\n", nome);
    }
    else {
        printf("Gentilissima signora %c\n", nome);
    }
    return 0;
}
