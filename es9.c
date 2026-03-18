/*Es 9. Scrivere un programma che letto un numero scrive tutti 
i suoi divisori*/

#include<stdio.h>
int main(){
    int num, divisore, conta = 0;
    printf("inserisci un numero");
    scanf("%d", &num);
    printf("I divisori sono: \n");
    for(divisore=3;divisore<=num/2;divisore=divisore+2){
        if(num % divisore==0){
            conta++;
        }
    }
    if(conta == 0 && num % 2 != 0) {
        printf("Il numero è primo!!!!!!!!!!!!!!!!!!");
    } else {
        printf("Il numero NONONOONONO è primo ");
    }
}