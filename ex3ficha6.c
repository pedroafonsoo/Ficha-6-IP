#include <stdio.h>

#define TAM 10


void main() {

	int i, x, vector1[TAM], vector2[TAM], reuniao[TAM], intersecao[TAM],diferenca[TAM];

	for (i = 0;i < TAM;i++) {
		
		vector1[TAM] = 0;
		vector2[TAM] = 0;
		reuniao[TAM] = 0;
		intersecao[TAM] = 0;
		diferenca[TAM] = 0;

	}


	printf("Introduza um numero de 0 a 9 para o vector 1");
	do {
		scanf("%d", &x);
		if (x >= 0 && x < 10) {
			vector1[x] = 1;

		}
	}while(x >= 0);

	printf("Introduza os valores de 0 a 9 para o vector 2");
	do {
		scanf("%d", &x);
		if (x >= 0 && x < 10) {
			vector2[x] = 1;

		}

	} while (x >= 0);



	//operacoes//
	for (i = 0;i < TAM;i++) {
		if (vector1[i] == 1 && vector2[i] == 1) {
			intersecao[i] = 1;
		}

		if (vector1[i] == 1 || vector2[i] == 1) {
			reuniao[i] = 1;
		}

		if (vector1[i] == 1 && vector2[i] == 0) {
			diferenca[i] = 1;
		}
	}




}