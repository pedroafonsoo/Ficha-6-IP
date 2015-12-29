#include<stdio.h>
#define TAM 100

int maior(int vector[], int dim){

    int i, maior, contador;
    contador=1;

    maior=vector[0];

    for(i=0;i<TAM;i++){

            if(maior<vector[i]){

                maior=vector[i];
                contador=1;
            }

            else{
                if(maior==vector[i]){
                        contador++;

                }

            }

        return  maior*contador;
    }




}

    void main(){

            int i,vector[TAM];

            for(i=0;i<TAM;i++){

            printf("Qual e o elemento : %d \n",i);
            scanf("%d",vector[i]);

            }

        printf("%d",maior(vector,dim));
    }
