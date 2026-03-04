/*Esercizio A6) Il programma genera un numero naturale casuale 
compreso tra 1 e 10 e l’utente deve indovinare il numero generato, 
il programma termina quando viene indovinato.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num_casuale, num_utente, min = 1, max = 10;
    int tentativi_max = 3, tentativi = 0;
    srand(time(NULL));
    num_casuale = rand() % (max - min + 1) + min;

    do {
        printf("Indovina il numero casuale tra 1 e 10: ");
        scanf("%d", &num_utente);
        tentativi++;
        if(num_casuale != num_utente) {
            printf("Male male \n Ti rimangono %d tentativi\n", tentativi_max-tentativi);
        }
    }while(num_casuale != num_utente && tentativi < tentativi_max);

    if(tentativi > 3) {
        printf("Hai perso, pochissima aura");
    } else {
        printf("AURAAAA");
    }

    return 0;

}