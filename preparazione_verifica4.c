#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int n;
    printf("Quante volte vuoi lanciare i dadi? (5-20): ");
    scanf("%d", &n);

    if (n < 5 || n > 20) {
        printf("Numero non valido. Inserisci un valore tra 5 e 20.\n");
        return 1;
    }

    int jackpot = 0;
    int sommaMax = -1, sommaMin = 100;
    float mediaSum = 0;

    for (int i = 0; i < n; i++) {
        int d1 = (rand() % 6) + 1;
        int d2 = (rand() % 6) + 1;
        int somma = d1 + d2;

        printf("\nLancio %d: dado1=%d, dado2=%d → Somma=%d → ", i + 1, d1, d2, somma);

        if (somma == 2 || somma == 12) {
            printf("JACKPOT ");
            jackpot++;
        }
        if (somma == 7) {
            printf("SETTE PORTA FORTUNA ");
        }
        if (somma % 2 == 0 && somma != 2 && somma != 12) {
            printf("PARI");
        } else if (somma % 2 != 0 && somma != 7) {
            printf("DISPARI");
        }

        if (somma > sommaMax) sommaMax = somma;
        if (somma < sommaMin) sommaMin = somma;
        mediaSum += somma;
    }

    printf("\n\n=== RISULTATI ===\n");
    printf("Somma massima: %d\n", sommaMax);
    printf("Somma minima: %d\n", sommaMin);
    printf("Jackpot totalizzati: %d\n", jackpot);
    printf("Media delle somme: %.1f\n", mediaSum / n);

    return 0;
}