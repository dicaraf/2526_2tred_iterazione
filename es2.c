/*Es 2. Scrivere i  numeri naturali compresi tra 1 e un numero 
letto in input estremi esclusi.
*/

#include <stdio.h>

int main(){
    int numero;
    do{
        printf("inserisci un numero meraviglioso:");
        scanf("%d", &numero);
        if(numero<=1){
            printf("inserisci un numero più grande");
        }
    }
    while(numero<=1);
    for(int i=2; i<numero; i++){
        printf("%d\n", i);
    }
}