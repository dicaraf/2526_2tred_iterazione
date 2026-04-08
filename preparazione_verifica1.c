/*1) scrivi un programma in C che mostri tutti i numeri pari successivi 
a un numero inserito dall'utente fino a 100.
*/

#include <stdio.h>

int main() {
    int num;

    printf("Inserisci un numero:");
    scanf("%d", &num);
    if(num%2 != 0) {
        num++;
    }
    for(int i = num; i <= 100; i = i + 2) {
            printf("%d\n", i);
        
    }
    return 0;
}