#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int codigo;
	int pecas;
	double valorPecas;
	int codigo2;
	int pecas2;
	double valorPecas2;
	double total;
	


	scanf ("%d %d %lf", &codigo, &pecas, &valorPecas);
	scanf ("%d %d %lf", &codigo2, &pecas2, &valorPecas2);

	total = pecas*valorPecas + pecas2*valorPecas2; 
	

	printf("VALOR A PAGAR: R$ %.2lf\n", total);


}