#include <stdio.h>
#include <stdlib.h>

int main()
{

	int numfun;
	int horas;
	double valorphora;
	double salario;


	scanf("%d", &numfun);
	scanf("%d", &horas);
	scanf("%lf", &valorphora);

	salario = horas * valorphora;

	printf("NUMBER = %d\nSALARY = U$ %.2lf\n", numfun, salario);

	return 0;

}