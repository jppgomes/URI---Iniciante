#include <stdio.h>
#include <stdlib.h>

int main(){

	int a, d, m, n;

	scanf("%d", &n);


	a = n/365;
	m = n%365/30;
	d = n%365%30;

	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", a,m,d);

	return 0;
}