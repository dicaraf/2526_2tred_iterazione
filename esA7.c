/*Esercizio A7) Il programma genera un numero naturale casuale 
compreso tra 1 e 100 e l’utente deve indovinare il numero generato, 
ad ogni tentativo il programma dice se il numero inserito era troppo 
alto o troppo basso; il programma termina quando viene indovinato. 
Se l'utente indovina in meno di 3 tentativi mostrare "Aura", 
se ci mette tra 4 e 10 tentativi mostrare "Bravino", altrimento 
mostrare "Brutto".
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main (){
    int numcasuale,numutente,numminimo=1,nummax=100,numtentativi=0;
    srand(time(NULL));
    numcasuale=rand()%(nummax - numminimo+1)+numminimo;
    do{
        printf("inserisci numero compreso tra 1 e 100: ");
        scanf("%d" , &numutente);
        if(numutente<numcasuale){ 
            printf("il numero inserito è più piccolo del numcasuale\n");
        }else if(numutente>numcasuale){
            printf("numutente più grande numcasuale\n");
        }
        numtentativi++;
    } while(numcasuale!=numutente);

    if(numtentativi<=3) printf("aura");
    else if(numtentativi>=4 && numtentativi<10) printf("bravino");
    else printf("brutto");

    return 0;
}