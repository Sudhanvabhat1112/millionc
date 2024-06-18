#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int num,guess,guesscount =1;
    srand (time(0));
    num =  rand()%10000+1;
    printf("guess number between 1 and 100\n");
    do{
        scanf("%d",&guess); //guess must be taken everytime
        if(guess<num){printf("higher number please \n");}
        else if (guess>num){printf("lower number please\n");}
        else{printf("you guessed it in %d attempts",guesscount);}
        guesscount ++;
    }while (guess!=num);
}

