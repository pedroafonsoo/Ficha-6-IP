#include <stdio.h>

#define N 5




void main() {

	int i, x, vector[N], soma, media;
	soma = 0;

	for (i = 0;i < N;i++) {
		printf("Introduza um numero \n");
		scanf("%d", &x);
		vector[i] = x;
	}

	for (i = 0;i < N;i++) {

		soma += vector[i];

	}
	media = soma / N;
	printf("O calculo da media deu : %d", media);

	if (N < media)
		vector[i] = 0;

}
