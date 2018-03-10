#include <stdio.h>
#include <stdlib.h>

int main () {

	
	int tempo;
	int velocidade;
	double litros;
	int espaco;

	scanf("%d", &tempo);
	scanf("%d", &velocidade);

	espaco = velocidade*tempo;

	litros = espaco/12.0;

	printf("%.3lf\n", litros);

	return 0;

}