#include <stdio.h>
#include <stdlib.h>

int main ()

{

	double area;
	double raio;

	double pi = 3.14159;

	scanf("%lf", &raio);

	area = pi * (raio*raio);

	printf("A=%.4f\n", area);
}