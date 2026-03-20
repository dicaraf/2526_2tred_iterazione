/*Si vuole costruire una slot machine in cui un utente può inserire
 1) una cifra iniziale da scommettere sull'uscita di testa o croce
 2) quanto puntare ad ogni scommessa
 3) per ogni scommessa l'utente deve puntare su testa (valore 1)
 oppure su croce (2), se indovina vince il doppio di quanto ha puntato,
 se non indovina vengono scalati i suoi soldi.
 L'utente continua a scommettere finchè non perde tutti i soldi.*/

 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>

 int main() {
    srand(time(NULL));
    int soldi_totali, soldi_scommessa, scommessa, moneta, tentativi=0;
    do {
        printf("Quanti soldi vuoi buttare oggi?");
        scanf("%d", &soldi_totali);
    }while(soldi_totali <= 0);
    do {
        printf("Quanti soldi vuoi buttare ad ogni scommessa?");
        scanf("%d", &soldi_scommessa);
    }while(soldi_scommessa > soldi_totali);

    do {
        soldi_totali = soldi_totali - scommessa;
        do{
            printf("vuoi puntare su testa (1) o su croce (2)?");
            scanf("%d", &scommessa);
        }while(scommessa!=1 && scommessa!=2);
        moneta = rand()%2+1;
        tentativi++;
        if(moneta==scommessa){
            soldi_totali = soldi_totali + scommessa*2;
            printf("Hai vinto la scommessa!\n");
        }else {
            printf("Hai vinto la scommessa!\n");
        }
        printf("Ti rimangono %d soldi", soldi_totali);
        
    }while(soldi_totali>=soldi_scommessa);
    printf("Dopo %d tentativi hai perso tutto...\n", tentativi);

    return 0;
 }