#include <stdio.h>

int main() {
    int numero;
    int i;
    for (i = 1; i <= 5; i++) {
        printf("Digite o %iº numero: ", i);
        scanf("%i", &numero);
        if (numero >= 100 && numero <= 200) {
            printf("Voce digitou um numero entre 100 e 200\n\n");
        } else {
            printf("Voce digitou um numero fora da faixa entre 100 e 200\n\n");
        }
    }
}
