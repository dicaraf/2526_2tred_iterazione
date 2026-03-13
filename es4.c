/*Es 4. Leggere in input 10 numeri e calcolarne la somma.*/

#include <stdio.h>
int main(){
    int numero, somma = 0;
    float media;

    for(int i = 0; i < 10; i++)
    {
        printf("Inserisci numero %d: ", i);
        scanf("%d", &numero);
        somma = somma + numero; 
    }
    media = (float)somma / 10;
    printf("La somma è %d, la media è %.2f", somma, media);

}