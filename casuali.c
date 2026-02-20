#include <stdio.h>
#include <stdlib.h>   // contiene rand() e srand()
#include <time.h>     // contiene time()

int main() {
    // 1. Inizializzo il generatore con il tempo corrente
    srand(time(NULL));
    int numero, min = 10, max = 100;
    // 2. Genero un numero casuale compreso tra min e max che sono inizializzati a 10 e 100 (vedi riga 7)
    numero = rand() % (max - min + 1) + min;
    printf("Numero casuale generato: %d\n", numero);

    return 0;
}
