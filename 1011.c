#include <stdio.h>
#include <stdlib.h>

int main () {


	double raio;
	double pi = 3.14159;
	double formula;

	scanf ("%lf", &raio);

	formula = (4.0/3) * pi * (raio*raio*raio);

	printf("VOLUME = %.3lf\n", formula);


	return 0;

}