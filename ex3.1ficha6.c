#include<stdio.h>
#define N 10

void main(){

        int i,num,reuniao[N],diferenca[N],vetor1[N],vetor2[N],intersecao[N];

            //Garantir que os registos estão limpos, ou seja a zero
        for(i=0;i<N;i++){
            reuniao[N]=0;
            diferenca[N]=0;
            intersecao[N]=0;
            vetor1[N]=0;
            vetor2[N]=0;
        }

        printf("Introduza um numero para o vetor1 ate ao 9 \n");
        do{
            scanf("%d",&num);
            if(num>=0 && num<10){

                vetor1[num]=1;
            }
        }while(num>=0);


        printf("Introduza um numero para o vetor2 ate ao 9 \n");
        do{
            scanf("%d",&num);
            if(num>=0 && num<10){
                vetor2[num]=1;

            }
        }while(num>=0);


        for(i=0;i<N;i++){

                if(vetor1[i]==1 && vetor2[i]==1){
                    intersecao[i]=1;
                }
                if(vetor1[i]==1 || vetor2[i]==1){
                    reuniao[i]=1;
                }
                if(vetor1[i]==1 && vetor2[i]==0){
                    diferenca[i]=1;
                }

        }








}
