#include<stdio.h>
#include<stdlib.h>

funcao(int vetor[], int tam)

    int ant=0;
    int contador=0;
    int i,j;
    int res=0;
    int maior=0;



    for(i=0;i<tam;i++){

            if(vetor[i]>=ant){

                maior=vetor[i];
            }
}

    for(j=0;j<=tam;j++){

        if(vetor[j]==maior){
            contador++;
        }
    res=maior*contador;
    printf("%d",res);

    }



    void main(){
        int i,tam,numero,vect[tam];

        printf("Introduza uma sequencia de numeros");
        scanf("%d",vect[tam]);

        funcao(vect,tam);





    }
