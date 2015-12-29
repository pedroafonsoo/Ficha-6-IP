

/*
 * File:   main.c
 * Author: StefanLoureiro
 *
 * Created on 21 de Dezembro de 2015, 19:48
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int funcao(int vetor[], int tam1){

    int ant=0;
    int i,j;
    int contador=0;
    int res=0;
    int maior=0;


    for(i=0; i<=tam1; i++){

        if(vetor[i]>=ant){
            ant=vetor[i];
            maior=vetor[i];

        }


    }

    for(j=0; j<=tam1; j++){

        if(vetor[j]==maior){
            contador=contador+1;
        }

    }

    res=maior*contador;


    printf("%d",res);
}



int main(){

    int num;
    int tam=5;
    int vec[tam];


    printf("Interoduza um numero de 5 algarismos:");
    scanf("%d",&vec[tam]);

    funcao(vec,tam);




}
