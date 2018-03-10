#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {


	double x1;
	double x2;
	double y1;
	double y2;
	double distanciaDoisPontos;

	scanf ("%lf %lf", &x1, &y1);
	scanf ("%lf %lf", &x2, &y2);

	distanciaDoisPontos = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));


	printf("%.4lf\n", distanciaDoisPontos);

	return 0;


}
