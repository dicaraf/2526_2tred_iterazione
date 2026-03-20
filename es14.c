//Es 14. Scrivere un programma che lancia 100 monete e dice
 //quante volte è uscita testa e quante volte è uscita croce.

 #include<stdio.h>
 #include<stdlib.h>
 #include<time.h>

 int main(){

    int moneta , testa=0 , croce=0 ,min=1, max=2;

    srand(time(NULL));
    for(int i=0 ; i<10000;i++){

       moneta=rand()%(max-min+1)+min;
       if(moneta==1){
            testa++;
            

       }else{

        croce++;
       }
    }
        printf("croce è uscita %d volte , testa è uscita %d volte", croce , testa);

 }
 

