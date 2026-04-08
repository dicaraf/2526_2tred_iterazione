/*3) scrivi un programma in C che mostri il moto uniformemente 
accelerato di un'automobile secondo per secondo finchè non arriva 
alla velocità di 100 km/h con un accelerazione scelta dall'utente. 
Mostra anche la distanza percorsa alla fine.
*/

#include <stdio.h>

int main() {
    float accelerazione, velocita_incrementale = 0, velocita_obbiettivo = 100, spazio;
    int tempo = 0;
    do {
        printf("inserisci l'accelerazione in m/s^2");
        scanf("%f", &accelerazione);
    }while(accelerazione <= 0);

    velocita_obbiettivo = velocita_obbiettivo / 3.6;

    while(velocita_incrementale < velocita_obbiettivo) {
        velocita_incrementale = accelerazione * tempo;
        spazio = 0.5 * accelerazione * tempo * tempo;
        
        printf("la tua velocità dopo %d secondi è %f m/s e hai percorso %f metri\n", 
            tempo, velocita_incrementale, spazio);
        tempo++;
    }
    

    return 0;
}