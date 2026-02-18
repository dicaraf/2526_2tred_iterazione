#include <stdio.h>

int main() {
    int numero = 0, potenza = 1, esponente = 0;

    while(numero <= 1) {
        printf("Inserisci numero maggiore di 1:");
        scanf("%d", &numero);
    }

    while(potenza <= 5000) {
        printf("Potenza di %d elevato a %d = %d\n", numero, esponente, potenza);
        potenza = potenza * numero;
        esponente++;
    }
    return 0;
}