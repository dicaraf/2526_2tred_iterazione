/*Esercizio A2) L’utente deve continuare a inserire dei caratteri 
fino a che non inserisce uno dopo l’altro due caratteri consecutivi 
(ad esempio si ferma dopo aver letto uno dopo l’altro ‘a’ e ‘b’).*/

#include <stdio.h>

int main() {
    char car1 = 'a', car2 = 'a';

    while(car2 != car1 + 1) {
        printf("Inserisci il primo carattere: ");
        scanf("%c", &car1);
        getchar();
        printf("Inserisci il secondo carattere: ");
        scanf("%c", &car2);
        getchar();
        if(car2 != car1 + 1) {
            printf("non hai inserito due caratteri consecutivi!\n");
        }
    }
    printf("hai inserito due caratteri consecutivi!\n");
}