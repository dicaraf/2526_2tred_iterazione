/*2) scrivi un programma in C che gestisca la raccolta fondi di 
un'associazione benefica: si continua a chiedere soldi all'utente 
finchè non si raggiungono almeno un valore in euro compreso tra 500 e 1000.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    float totale = 0, donazione;
    int min = 500, max = 1000, obbiettivo;

    srand(time(NULL));
    obbiettivo = rand() % (max - min + 1) + min;
    printf("Il tuo obbiettivo è %d\n", obbiettivo);
    do {
        printf("Dammi dei soldi! grazie");
        scanf("%f", &donazione);
        if(donazione > 0) {
            printf("BRAVOOOOO\n");
            totale = totale + donazione;
        } else if(donazione == 0) {
            printf("Sarà per la prossima volta!");
        } else {
            printf("sei un ladro!\n");
        }
        printf("Mancano %.2f euro per raggiungere l'obbiettivo\n", obbiettivo - totale);
    } while (totale < obbiettivo);
    return 0;
}