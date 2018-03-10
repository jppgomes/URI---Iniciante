#include <stdio.h>
#include <stdlib.h>

int main () {

	int x; //distancia total percorrida (em Km)
	double y; //total de combustivel gasto (em litros)
	double gastomedio;

	scanf("%d", &x);
	scanf("%lf", &y);


	gastomedio = x/y;

	printf("%.3lf km/l\n", gastomedio);

	return 0;



}