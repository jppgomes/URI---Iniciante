#include <stdio.h>
#include <stdlib.h>

int main(){

	int a, d, m, n;

	scanf("%d", &n);


	a = n/365;
	m = n%365/30;
	s = n%365%30;

	printf("%dano(s)\n mes(es)\n%ddia(s)\n");

	return 0;
}