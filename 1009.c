#include <stdio.h>
#include <stdlib.h>

int main(){

	char nome[20];
	double salario;
	double totalDeVendas;
	double salarioFinal;

	scanf("%s", nome);
	scanf("%lf", &salario);
	scanf("%lf", &totalDeVendas);

	salarioFinal = (0.15*totalDeVendas) + salario;

	printf("TOTAL = R$ %.2lf\n", salarioFinal);

	return 0;

}