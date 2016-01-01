#include<stdio.h>

#define N 5




        int i,num,vetor[N],soma,media;
        soma=0;

        for(i=0;i<N;i++){
            printf("Introduza um numero \n");
            scanf("%d",&num);
            num=vetor[i];
        }

        for(i=0;i<N;i++){

            soma=soma+vetor[i];

        }
         media=vetor[i]/num;
         if(vetor[i]<media){
            vetor[i]=0;
         }
         printf("O calculo da media deu: %d",media);
        }
