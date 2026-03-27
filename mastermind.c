/*mastermind*/


#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main (){
    int casuale1, casuale2, casuale3, utente1, utente2, utente3;
    srand (time(NULL));
    casuale1= rand() %9+1;
    casuale2= rand() %9+1;
    casuale3= rand() %9+1;
    do {
        printf ("inserisci i 3 numeri: ");
        scanf ("%d %d %d", &utente1, &utente2, &utente3);
        if (utente1==casuale1) {
            printf ("la prima cifra è nel posto giusto\n");
        } else if (utente1==casuale2 || utente1==casuale3) {
            printf ("la prima cifra che ha inserito è giusta ma in una sbagliata posizione\n");
        } else {
            printf ("la prima cifra che hai inserito non esiste\n");
        } if (utente2==casuale2) {
            printf ("la seconda cifra è nel posto giusto\n");
        } else if (utente2==casuale1 || utente2==casuale3) {
            printf ("la seconda cifra che ha inserito è giusta ma in una sbagliata posizione\n");
        } else {
            printf ("la seconda cifra che hai inserito non esiste\n");
        } if (utente3==casuale3) {
            printf ("la terza cifra è nel posto giusto\n");
        } else if (utente3==casuale2 || utente3==casuale1) {
            printf ("la terza cifra che ha inserito è giusta ma in una sbagliata posizione\n");
        } else {
            printf ("la terza cifra che hai inserito non esiste\n");
        } 
    } while (utente1 != casuale1 || casuale2 != utente2 || casuale3 != utente3);
        printf ("HAI VINTO!!!\n");
}