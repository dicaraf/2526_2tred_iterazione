/*Creare un programma che continua a far inserire all’utente dei 
numeri interi, il programma si ferma quando vengono inseriti più
 numeri negativi di quelli positivi.*/

 #include <stdio.h>

 int main() {
    int numero, positivi = 0, negativi = 0;

    while(negativi <= positivi) {
        printf("Inserisci un numero:");
        scanf("%d", &numero);
        if(numero<0) {
            negativi++;
        } else {
            positivi++;
        }
    }

    printf("Hai inserito %d numeri positivi e %d numeri negativi", positivi, negativi);

    return 0;
 }